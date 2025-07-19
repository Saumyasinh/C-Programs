str = input("Enter syntax =>")

for x in str:
    if x.isupper():
        print(x.lower(),end="")
    elif x.islower():
        print(x.upper(),end="")
    else:
        print(x,end=" ")
