num = 600851475143
prime = 1

while(num != 1):
    for x in range(2, num):
        if(num % x == 0):
            while(num % x == 0):
                print(num)
                num = num/x
                prime = x
print(prime)