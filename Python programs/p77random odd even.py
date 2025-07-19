import random
list1=[]
n=int(input("enter limit =>"))

for i in range(1,n+1):
    x=random.randint(1,50)
    list1.append(x)

print(list1)

for x in list1:
    if x%2==0:
        print(x,"is even")
    else:
        print(x,"is odd")