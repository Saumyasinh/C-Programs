import random
listD=[]
t1=()
n=int(input("enter limit =>"))

for i in range(1,n+1):
    x=random.randint(1,50)
    listD.append(x)

t1=tuple(listD)
print(t1)
for x in t1:
    if x%2==0:
        print(x)
