import math

a = 1
b = 1
c = 1000 - a - b
product = 0
success = False

for x in range(1,1000):
    a = x
    for y in range(1,1000-x):
        b = y
        c = math.sqrt(a**2 + b**2)
        if(c % 1 == 0.0):
            if(c == float(1000 - a - b)):
                product = a * b * c
                success = True
                break
    if(success):
        break

print(a,b,c,product)            