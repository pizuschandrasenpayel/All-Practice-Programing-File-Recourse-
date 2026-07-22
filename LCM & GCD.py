# GCD-> Greatest Common Divisor:

a,b = map(int, input().split())

while a != 0:
    c = b%a
    b = a
    a = c
GCD = b

print(b)

#LCM-> Least Common Multiple:

a,b = map(int, input().split())

LCM = a*b

while a != 0:

    c = b%a

    b = a

    a = c

LCM = LCM//GCD

print(LCM)
