str = input("Enter syntax =>")

c=0
c1=0
for x in str:
    if x.isupper():
        c=c+1
    elif x.islower():
        c1=c1+1
print("\nTotal UPPERCASE :",c)
print("\nTotal lowercase :",c1)