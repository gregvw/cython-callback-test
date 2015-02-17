#!/usr/bin/env python

import numpy as np
from callback import pyfun

x = np.arange(11)
y = np.zeros(11)

def f(x):
    return x*x  

y = pyfun(f,x)

print(y)
    




