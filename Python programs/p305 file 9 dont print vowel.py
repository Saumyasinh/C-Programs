f1 = open("h:\\abc.txt", "r")
while True:
    ch = f1.read(1)
    if not ch:
        break
    if (ch == 'A' or  ch == 'a' or ch == 'E' or ch == 'e' or ch == 'I' or ch == 'i' or ch == 'O' or ch == 'o' or ch == 'U' or ch == 'u'):
        pass
    else:
        print(ch,end="")
f1.close()