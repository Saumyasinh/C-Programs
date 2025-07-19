a=int(input("Enter no1 :"))
b=int(input("Enter no1 :"))
c=int(input("Enter no1 :"))
count=0
for i in range (a+1,b):
    if(i%c==0):
        count=count+1
print("The total numbers between",a,"and",b,"divisible by",c,"is",count)