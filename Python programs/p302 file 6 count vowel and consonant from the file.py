f1 = open("h:\\abc.txt", "r")
c = 0
c1 = 0
while True:
    ch = f1.read(1)
    if not ch:
        break
    if (ch == 'A' or  ch == 'a' or ch == 'E' or ch == 'e' or ch == 'I' or ch == 'i' or ch == 'O' or ch == 'o' or ch == 'U' or ch == 'u'):
        c = c + 1
    else:
        c1 = c1 + 1
f1.close()
print("Total Vowels are :", c)
print("Total Other are :", c1)