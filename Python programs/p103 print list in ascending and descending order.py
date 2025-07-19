import random
list1=[]
n=int(input("enter limit =>"))

for i in range(1,n+1):
    x=random.randint(1,50)
    list1.append(x)

print(list1)


list1.sort()
print("ascending =",list1)
list1.reverse()
print("descending =",list1)