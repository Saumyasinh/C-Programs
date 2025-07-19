import random
list1=[]
n=int(input("enter limit =>"))

for x in range(1,n+1):
    x=random.randint(1,50)
    list1.append(x)

print(list1)

for x in list1:
    c=0
    n=x
    for i in range(2,x//2):
        if x%i==0:
            c=1
        break
print("*"*30)
if c==0:
     print("Prime number =",n)
print("*"*30)
