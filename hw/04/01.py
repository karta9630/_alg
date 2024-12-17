#黎曼
import numpy as np

def f(x,y,z):
    return 3*x**2+y**2+2*z**2
step=0.01
def G(f,rx,ry,rz):
    cnt=0.0
    for x in np.arange(rx[0],rx[1],step):
        for y in np.arange(ry[0],ry[1],step):
            for z in np.arange(rz[0],rz[1],step):
                cnt+=f(x,y,z)*step**3
    return cnt

print(G(f,[0,1],[0,1],[0,1]))