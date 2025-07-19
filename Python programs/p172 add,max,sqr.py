def add(a,b):
    print(a+b)
def max(a,b):
    if a>b:
        print("No1 is max")
    else:
        print("NO2 is max")
def sqr(a):
    print("Square=",a*a)

x=int(input("Enter no1 =>"))
y=int(input("Enter no2 =>"))
add(x,y)
max(x,y)
sqr(x)