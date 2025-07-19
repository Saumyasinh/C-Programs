str1='Saumya'
print("Original string is",str1)
x=str1[0]
l=len(str1)
y=int(l/2)
x = x+str1[y]
x = x+str1[l-1]
print("New string :",x)