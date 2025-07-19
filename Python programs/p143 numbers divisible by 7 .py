import random
listD=[]
t1=()
n=int(input("enter limit =>"))

for i in range(1,n+1):
    x=random.randint(1,50)
    listD.append(x)

t1=tuple(listD)
print(t1)

c=0
s=0
for x in t1:
    if x%7==0:
        print(x)
        s=s+1
        c=c+x
print("Sum = ",s)
print("Count = ",c)