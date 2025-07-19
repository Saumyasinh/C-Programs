f1 = open("h:\\abc.txt", "r")
f2=open("h:\\pqr.txt","w")
while True:
    ch = f1.read(1)
    if not ch:
        break
    if (ch == 'A' or  ch == 'a' or ch == 'E' or ch == 'e' or ch == 'I' or ch == 'i' or ch == 'O' or ch == 'o' or ch == 'U' or ch == 'u'):
        print("7",end="")
    else:
        print(ch,end="")
f1.close()