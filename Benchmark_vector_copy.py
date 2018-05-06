#!/usr/bin/python
import time

a = [1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233];

t0 = time.clock()
b = [];
for i in range(len(a)):
    b.append(a[i])
print time.clock() - t0, "cell-by-cell time"

t1 = time.clock()
c = a[:]
print time.clock() - t1, "vector copy time"

print a
print b
print c
