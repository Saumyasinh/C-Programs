f1 = open("h:\\abc.txt", "r")
f2 = open("h:\\pqr.txt","w")
while True:
    ch = f1.read(1)
    if not ch:
        break
    if ch.isupper():
        f2.write(ch.lower())
    elif ch.islower():
        f2.write(ch.upper())
    else:
        f2.write(ch)
f1.close()
f2.close()