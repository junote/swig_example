%module example
%{
#include "example.h"
%}

%include "typemaps.i"
%apply int *OUTPUT { int *result };
%apply int *INPUT { int *x, int *y};

%apply int *INOUT { int *n};

%apply int *OUTPUT {int *len}


// http://www.swig.org/Doc3.0/Library.html#Library_carrays
%include "carrays.i"
%array_functions(int, intArray);
%array_class(int,intArrayclass);


//http://www.swig.org/Doc3.0/SWIGDocumentation.html#Python_nn48

%{
static int convert_darray(PyObject *input, double *ptr, int size) {
  int i;
  if (!PySequence_Check(input)) {
    PyErr_SetString(PyExc_TypeError, "Expecting a sequence");
    return 0;
  }
  if (PyObject_Length(input) != size) {
    PyErr_SetString(PyExc_ValueError, "Sequence size mismatch");
    return 0;
  }
  for (i =0; i < size; i++) {
    PyObject *o = PySequence_GetItem(input, i);
    if (!PyFloat_Check(o)) {
      Py_XDECREF(o);
      PyErr_SetString(PyExc_ValueError, "Expecting a sequence of floats");
      return 0;
    }
    ptr[i] = PyFloat_AsDouble(o);
    Py_DECREF(o);
  }
  return 1;
}
%}

%typemap(in) double [ANY](double temp[$1_dim0]) {
  if (!convert_darray($input, temp, $1_dim0)) {
    SWIG_fail;
  }
  $1 = &temp[0];
}


%include "example.h"