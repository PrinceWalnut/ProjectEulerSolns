primes = [2,3,5,7,11,13]
count = 6
success = False

while(count != 10001):
    x = primes[count-1]
    while(x > 0):
        for y in range(count):
            if(x % primes[y] == 0):
                break
            elif(y == count-1):
                primes.append(x)
                success = True
                count += 1
                break
        if(success):
            success = False
            break
        x += 1
        
print(primes[count-1])    