n=int(input("Enter limit =>"))
c=0
s=0
c1=0
s1=0
for i in range(1,n+1):
    if i%2==0:
        print(i,"is even")
        c+=1
        s=s+i
    else:
        print(i,"is odd")
        c1+=1
        s1=s1+i

print("evencount = ",c," evensum = ",s)
print("Oddcount = ",c1," Oddsum = ",s1)

