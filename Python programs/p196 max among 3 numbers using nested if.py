a=int(input("Enter number1 :"))
b=int(input("Enter number2 :"))
c=int(input("Enter number3 :"))
if (a>b):
    if (a>c):
        print(a,"is max")
    else:
        print(c,"is max")
else:
    if(b>c):
        print(b,"is max")
    else:
        print(c,"is max")