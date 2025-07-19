n=int(input("Enter values required for fibonaci sequence :"))
n1=0
n2=1
if(n<=0):
    print("Enter positive integer. ")
elif(n==1):
    print("Fibonaci sequence: ",n1)
else:
    print("Fibonaci sequence:" )
    print(n1)
    print(n2)
    for i in range(n-2):
        nth=n1+n2
        print(nth)
        n1=n2
        n2=nth