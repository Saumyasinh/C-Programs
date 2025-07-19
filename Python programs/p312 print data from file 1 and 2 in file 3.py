f1 = open("h:\\abc.txt","r")
f2 = open("h:\\pqr.txt","r")
f3 = open("h:\\mno.txt","w")
while True:
    ch = f1.read(1)
    if not ch:
        break
    f3.write(ch)
while True:
    ch = f2.read(2)
    if not ch:
        break
    f3.write(ch)
f1.close()
f2.close()
f3.close()
print("Copied")