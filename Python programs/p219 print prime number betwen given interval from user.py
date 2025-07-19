a=int(input("Enter start interval :"))
b=int(input("Enter end interval :"))
for j in range(a,b+1):
    flag=0
    for i in range(2,j):
        if(j%i==0):
            flag=1
    if(flag==0):
        print(j,end="  ")