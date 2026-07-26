#Prime Number With For loop:

'''n = int(input("Enter the Value:"))

if n > 1:
    for i in range(2,n):
        if n%i == 0:
            print("Not Prime Number")
            break
    else:
        print("Prime Number")
else:
    print("Not Prime Number")'''


#Prime Number with While Loop:

'''n = int(input("Enter the value:"))

if n >1:
    i = 2
    while i<n:
        if n%i == 0:
            print("Not Prime Number")
            break
        i = i+1
    else:
        print("Prime Number")
else:
    print("Not Prime Number")'''


#Prime Number with Function:

#For Loop:

'''def prime(n):

    if n<=1:
        return False
    for i in range(2,n):
        if n%i == 0:
            return False
    return True
num = int(input("Enter the value:"))

if prime(num):
    print("Prime Number")
else:
    print("Not Prime Number")'''

#While Loop:

def prime(n):

    if n<=1:
        return False
    i = 2
    while i<n:
        if n%i == 0:
            return False
        i = i + 1
    return True

ami = int(input("Enter the value:"))

if prime(ami):
    print("Prime Number")
else:
    print("Not Prime Number")