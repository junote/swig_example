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


%typemap(in) (char *str, int len) {
  $1 = PyString_AsString($input);
  $2 = PyString_Size($input);
};

%typemap(in,numinputs=0) Point **p (Point  *temp) {
  $1 = &temp;
}

%typemap(argout) Point **p {
  $result = SWIG_Python_AppendOutput($result,SWIG_NewPointerObj(SWIG_as_voidptr(*$1), $*1_descriptor, SWIG_POINTER_OWN));
}


%include "example.h"