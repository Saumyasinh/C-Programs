import random
list1=[]
n=int(input("enter limit =>"))

for i in range(1,n+1):
    x=random.randint(1,50)
    list1.append(x)

print(list1)

for x in list1:
    if list==[]:
        print("list is empty")
    else:
        print("number of elements",len(list1))
