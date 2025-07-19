f1=open("h:\\abc.txt","r")
c=0
c1=0
while True:
    ch=f1.read(1)
    if not ch:
        break
    if ch.isupper():
        c=c+1
    elif ch.islower():
        c1=c1+1
f1.close()
print("Total UPPERCASE are :",c)
print("Total lowercase are :",c1)