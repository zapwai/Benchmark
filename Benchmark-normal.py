#!/usr/bin/python
import time
import numpy as np
import sys

def procedure():
    print(np.random.normal(0,1,1))

N = int( sys.argv[1] );   
t1 = time.time()
t0 = time.clock()
for i in range(0,N):
    procedure()
print time.clock() - t0, "seconds process time"
#procedure()
print time.time() - t1, "seconds wall time"
