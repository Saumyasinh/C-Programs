f1 = open("h:\\abc.txt", "r")
f2 = open("h:\\pqr.txt","w")
v=['a','e','i','o','u','A','E','I','O','U']
while True:
    ch = f1.read(1)
    if not ch:
        break
    if ch in v:
        f2.write(ch)
f1.close()
f2.close()
