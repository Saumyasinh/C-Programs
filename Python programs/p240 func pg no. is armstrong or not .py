def armstrong(n):
    sum=0
    backup=n
    while(n!=0):
        digit=n%10
        sum=sum+digit*digit*digit
        n=n//10
    if(sum==backup):
        print("Armstrong number")
    else:
        print("Not an armstrong number")
n=int(input("Enter num :"))
armstrong(n)