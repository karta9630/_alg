import numpy as np

def f(x, y, z):
    return 3*x**2+y**2+2*z**2
run = 100000  

def mnG(f, rx, ry, rz, num_samples):
    x = np.random.uniform(rx[0], rx[1], num_samples)
    y = np.random.uniform(ry[0], ry[1], num_samples)
    z = np.random.uniform(rz[0], rz[1], num_samples)
    values = f(x, y, z)
    integral = np.mean(values) * (rx[1] - rx[0]) * (ry[1] - ry[0]) * (rz[1] - rz[0])
    return integral

num = mnG(f, [0,1], [0,1], [0,1],run)
print(num)
