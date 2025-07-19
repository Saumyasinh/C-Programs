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
print("*"*30)
s = int(input("Enter item to search =>"))
for x in t1:
    if s in t1:
        print(s,"is in list.")
        c=c+1
    else:
        print(s,"is not in list.")
        c=c+1
print("*"*30)