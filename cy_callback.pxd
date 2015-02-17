import cython
from libcpp.vector cimport vector

cdef extern from "callback.hpp":
    ctypedef double (*Callback)( void *apply,
                               double x )
    vector[double] function( Callback callback, 
                   void* apply, 
                   vector[double] x )
