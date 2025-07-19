import random
list1=[]
n=int(input("enter limit =>"))

for i in range(1,n+1):
    x=random.randint(1,50)
    list1.append(x)

print(list1)

list2=[]
list3=[]
for x in list1:
    if x%2==0:
        list2.append(x)
    else:
        list3.append(x)
print("list2 =",list2)
print("list3 =",list3)