n=int(input("Enter number of rows :"))
k=97
for i in range(1,n+1):
    for j in range(1,i+1):
        print(chr(k),end=" ")
        k=k+1
    print()
