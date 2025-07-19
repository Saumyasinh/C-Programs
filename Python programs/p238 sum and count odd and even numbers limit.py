n=int(input("Enter limit =>"))
even=0
odd=0
sum_even=0
sum_odd=0
for i in range(1,n+1):
    a=int(input("Enter number :"))
    if(i%2==0):
        even=even+1
        sum_even+=a
    else:
        odd=odd+1
        sum_odd+=a
print("Total odd :",odd,"Sum of odd numbers :",sum_odd)
print("Total even :",even,"Sum of even numbers :",sum_even)