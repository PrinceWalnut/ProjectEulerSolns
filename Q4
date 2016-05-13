product = 0
num1 = 999
num2 = 999
ans = 0
success = False

while(success == False):
    product = num1 * num2
    if(str(product) == str(product)[::-1] and ans < product): #inverts product to check if palindrome 
        ans = product
        print(num1, " and ", num2)
    if(num2 == 1):
        num1 -= 1
        num2 = 999
    elif(num1 == 1 and num2 == 2):
        success = True
    else:
        num2 -= 1
        
print(ans)