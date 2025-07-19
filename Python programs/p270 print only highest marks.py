import random
d1={}
n=int(input("Enter limit =>"))
for i in range(1,n+1):
    no=random.randint(1,30)
    m=random.randint(1,50)
    d1[no] = m

print(d1)

list1=[]
for k in d1:
    list1.append(d1[k])

y=max(list1)

for k,v in d1.items():
    if v==y:
        print(k,v)

