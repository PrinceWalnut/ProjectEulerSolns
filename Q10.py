num = 2000000 #upper bound for primes
sum = 2 #holds sum of primes
primes = [2] #holds primes
count = 1
tempnum = 0

for x in range(3, num, 2):
    tempnum = x
    for y in range(count):
        while(tempnum % primes[y] == 0):
            tempnum = tempnum / primes[y]
    if(tempnum != 1):
        primes.append(tempnum)
        count += 1
        sum += tempnum
print(sum)