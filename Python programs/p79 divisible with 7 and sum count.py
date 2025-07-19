import random
list1=[]
n=int(input("enter limit =>"))

for i in range(1,n+1):
    x=random.randint(1,50)
    list1.append(x)

print(list1)
s=0
c=0
for x in list1:
    if x%7==0:
        print(x)
        s=s+x
        c=c+1
print("\nSum=",s)
print("\nCount=",c)