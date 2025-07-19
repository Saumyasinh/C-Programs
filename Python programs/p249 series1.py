n = int(input("Enter number =>"))
f=1
for i in range(n,0,-1):
    print(i, "x", end="")
    f=f*i
print("\nFact =",f)

