#Fibonacci For Loop + function:

'''n = int(input("How many terms: "))

a = 0
b = 1

for i in range(n):
    print(a, end=" ")

    c = a + b
    a = b
    b = c'''

#Function used kore fibonacci:

'''def fibonacci(n):
    a = 0
    b = 1
    for i in range(n):
        print(a, end=" ")

        c = a + b
        a = b
        b = c
    

num = int(input("How many terms:"))
fibonacci(num)'''


#Fibonacci While Loop + Function:

'''n = int(input("How many terms:"))

a = 0
b = 1
i = 0

while i<n:
    print(a, end=" ")

    c = a + b
    a = b
    b = c

    i = i+1'''

def fibonacci(n):
    x = 0
    y = 1
    i = 0
    while i<n:
        print(x, end=" ")
        z = x + y
        x = y
        y = z

        i = i + 1

num = int(input("How many terms:"))
fibonacci(num)
#print()