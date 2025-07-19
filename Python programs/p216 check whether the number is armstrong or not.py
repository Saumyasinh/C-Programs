n=int(input("Enter number :"))
temp=n
sum=0

while temp!=0:
    d=temp%10
    sum=sum+d*d*d
    temp=temp//10
if sum==n:
    print("Number is armstrong.")
else:
    print("Number is not armstrong.")