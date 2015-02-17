from cy_callback cimport function
from libcpp.vector cimport vector

def pyfun(f,x):
    return function( cb, <void*> f, <const vector[double]&> x )
    

cdef double cb(void* f, double x ):
    return (<object>f)(x)

