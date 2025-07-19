import random
d1 = {}
n=int(input("enter limit =>"))

for i in range(1,n+1):
    no=random.randint(1,30)
    m=random.randint(1,50)
    d1[no] = m
print(d1)


print("Rno\tMarks\tResult")
print("*"*30)

for k , v in d1.items ():
    if v<18:
        print(k,"\t",v,"\tFail")
print("*"*30)