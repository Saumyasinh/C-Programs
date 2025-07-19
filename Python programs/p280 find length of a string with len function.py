def findlen(str):
    c=0
    for i in str:
        c=c+1
    return c
str=input("Enter string =>")
print("Length of the string :",findlen(str))