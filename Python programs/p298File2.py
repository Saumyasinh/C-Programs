f1=open("h:\\abc.txt","r")

while True:
    ch=f1.read(1)
    if not ch:
        break
    print(ch)
f1.close()