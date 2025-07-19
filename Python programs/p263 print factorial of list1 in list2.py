import random
list1=[]
n=int(input("enter limit =>"))

for i in range(1,n+1):
    x=random.randint(1,50)
    list1.append(x)

print(list1)

list2=[]
for x in list1:
    f=1
    for i in range(1,x+1):
        f=f*i
    list2.append(f)

print("list2 =",list2)