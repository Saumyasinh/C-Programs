n=int(input("Enter the number :"))
factorial=1
if(n<0):
    print("Negative numbers are not allowed.")
elif n==1 and n==0:
    print("factorial= ",factorial)
else:
    for i in range(2,n+1):
        factorial=factorial*i
    print("Factorial of number",n,"is ",factorial)