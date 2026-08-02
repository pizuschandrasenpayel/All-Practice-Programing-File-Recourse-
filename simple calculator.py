print("Mini Calculator.....")
print("Choice option:\n","1.Addition\n","2.Subtraction\n","3.Maltiplication\n","4.Division")

n = int(input("Choice option number:"))

a = float(input("Enter first Number:"))
b = float(input("Enter second Number:"))

if n==1:
    print("Addition:",a+b)
elif n==2:
    print("Subtraction:",a-b)
elif n==3:
    print("Maltiplication:",a*b)
if n==4:
    if b==0:
        print("Math Error...!,Division by zero is not posible.")
    else:
        print("Division:",a/b)