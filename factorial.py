# Factorial ber kora Funtion & NON Function:


'''n = int(input())

fact = 1
#i = 1

#while i<=n:
    #fact *= i      #fact = fact*i
    #i += 1         # i = i+1


for i in range(1, n+1,1):
    fact *= i

print(fact)'''




# function used kore factorial:

def factorial(n):
    fact = 1

    for i in range(1, n+1, 1):
        fact = fact*i
    return fact

n = int(input("Enter a Number:"))

# Function used korer subhida hoilo akber a onek factorial er man ber kora jay nicer niom a.....

#print(factorial(4))
#print(factorial(5))
#print(factorial(10))

print("Factorial:",factorial(n))