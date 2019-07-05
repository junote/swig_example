%module example
%{
#include "example.h"
%}

%include "typemaps.i"
%apply int *OUTPUT { int *result };
%apply int *INPUT { int *x, int *y};

%apply int *INOUT { int *n};

%apply int *OUTPUT {int *len}

%include "example.h"