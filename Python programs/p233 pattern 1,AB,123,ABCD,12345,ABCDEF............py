n=int(input("Enter number of rows :"))
for i in range(1,n+1):
    l=65
    g=1
    for j in range(1,n-i+1):
        print(end=" ")
    for k in range(1,i+1):
        if(i%2==0):
            print(chr(l),end=" ")
            l=l+1
        else:
            print(g,end=" ")
            g=g+1
    print()
