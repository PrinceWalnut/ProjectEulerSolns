sumsq = 0
sqsum = 0

for x in range(101):
    sumsq += x**2
    sqsum += x
    
sqsum = sqsum**2

diff = sumsq - sqsum

print(diff)