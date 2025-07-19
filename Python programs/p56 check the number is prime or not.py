num=int(input("Enter limit =>"))
if num>1:
    c=0
    for i in range(2,num):
        if num%i==0:
            c=1
            break
    if c==0:
        print("Num is prime")
    else:
        print("Num is not prime")
else:
    print("sorry")
