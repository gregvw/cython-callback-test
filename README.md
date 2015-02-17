# cython-callback-test

This code shows how to define a function in Python that is used 
at the C++ level to evaluate some quantity which is then returned. 

The Python functions are replaced by function pointers and a callback
interface is declared in callback.hpp to give the correct signature to C++.
The proper usage of the callback is defined in the Cython file 
cy_callback.pyx.

A Python test script defines a function that returns the square of
its argmument. This is passed to C++ and the function is applied to
every element in a vector to produce a new vector which is returned
as a NumPy array.

This is inefficient since a new vector is being created and returned,
however, it is apparently not possible to modify the values of the 
vector in-situ by taking a (non-const) reference to a vector an another
argument since std::vector cannot take ownership of previously allocated
storage.


