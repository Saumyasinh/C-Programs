def evenodd():
    x = int(input("Enter limit => "))
    s=0
    c=0
    for i in range(1,x+1):
        if i % 2==0:
            print(i)
            s+=i
            c+=1
    print("Sum = ",s)
    print("Count = ",c)

evenodd()



