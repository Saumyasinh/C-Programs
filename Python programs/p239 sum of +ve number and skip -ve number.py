n=int(input("Enter limit =>"))
sum_positive=0
for i in range(1,n+1):
    a=int(input("Enter number :"))
    if(a<0):
        continue
    sum_positive+=a
print("Sum of positive numbers =",sum_positive)