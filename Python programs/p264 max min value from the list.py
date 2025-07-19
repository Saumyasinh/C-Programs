import random
list1=[]
n=int(input("enter limit =>"))

for i in range(1,n+1):
    x=random.randint(1,50)
    list1.append(x)

print(list1)
print(max(list1))
print(min(list1))
