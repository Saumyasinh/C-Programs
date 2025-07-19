import random
d1={}
n=int(input("Enter limit =>"))
for i in range(1,n+1):
    no=random.randint(1,30)
    m=random.randint(1,50)
    d1[no] = m
print(d1)

print("Rno\tMarks\tResult")
print("*"*30)
c=0
c1=0
for x , y in d1.items ():
    if y>18:
        print(x,"\t",y,"\tPass")
        c=c+1
    else:
        print(x,"\t",y,"\tFail")
        c1=c1+1
print("*"*30)
print("No. of students Passed =",c)
print("No. of students Failed =",c1)
print("*"*30)