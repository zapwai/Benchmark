#!/usr/bin/python
import time

def procedure():
    time.sleep(1)

t0 = time.clock()
#things
procedure()
print time.clock() - t0, "seconds process time"

t1 = time.time()
#things
procedure()
print time.time() - t1, "seconds wall time"
