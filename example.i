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


%include "example.h"