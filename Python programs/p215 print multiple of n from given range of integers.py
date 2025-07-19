n=int(input("Enter n :"))
start=int(input("Enter start range :"))
end=int(input("Enter end range :"))
for i in range(start,end+1):
    if(i%n==0):
        print(i,end=" ")