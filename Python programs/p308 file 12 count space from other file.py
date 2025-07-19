f1 = open("h:\\abc.txt", "r")
f2 = open("h:\\pqr.txt","w")
c=0
while True:
    ch = f1.read(1)
    if not ch:
        break
    if ch==" ":
        c+=1
        f2.write(ch)
f1.close()
f2.close()
print("Number of spaces are :",c)