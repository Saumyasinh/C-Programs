n = int(input("Enter number =>"))
s=0
for i in range(1,n+1,5):
    print(i, "+", end="")
    s=s+i
print("\n sum =",s)