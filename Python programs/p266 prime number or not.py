n=int(input("Enter number => "))
c=0
for i in range(2,n//2):
    if n%i==0:
        c=1
        break
print("*"*30)
if c==0:
    print(n,"is a prime number")
else:
    print(n,"is not a prime number")
print("*"*30)