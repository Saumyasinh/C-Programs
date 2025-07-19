import random
list1=[]
n=int(input("enter limit =>"))

for i in range(1,n+1):
    x=random.randint(1,50)
    list1.append(x)

print(list1)

s=0
s1=0
c=0
c1=0
for x in list1:
    if x%2==0:
        print(x,"is even")
        s=s+x
        c=c+1
    else:
        print(x,"is odd")
        s1=s1+x
        c1=c1+1
print("*"*30)
print("Sum =",s)
print("Count =",c)
print("*"*30)
print("Sum1 =",s1)
print("Count1 =",c1)
print("*"*30)