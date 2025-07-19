f1=open("h:\\abc.txt","r")
while True:
    ch=f1.read(1)
    if not ch:
        break
    if ch==" ":
        pass
    else:
        print(ch,end="")
f1.close()