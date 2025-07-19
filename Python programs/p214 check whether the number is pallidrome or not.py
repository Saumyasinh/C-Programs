n=int(input("Enter number :"))
rev_num=0
temp=n
while n!=0:
    digit=n%10
    rev_num=rev_num*10+digit
    n=n//10
print("Reverse number :",rev_num)
if(rev_num==temp):
    print("Number is pallindrome.")
else:
    print("Number is not pallindrome.")