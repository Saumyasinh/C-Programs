import random
d1 = {}
n=int(input("enter limit =>"))

for i in range(1,n+1):
    rno=random.randint(1,30)
    m=random.randint(1,50)
    d1[rno] = m
print(d1)