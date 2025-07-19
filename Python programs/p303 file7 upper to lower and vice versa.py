f1=open("h:\\abc.txt","r")
c=0
c1=0
while True:
    ch=f1.read(1)
    if not ch:
        break
    if ch.isupper():
        print(ch.lower(),end="")
    elif ch.islower():
        print(ch.upper(),end="")
    else:
        print(ch,end="")
f1.close()