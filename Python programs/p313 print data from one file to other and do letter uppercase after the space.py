f1=open("h:\\abc.txt","r")
f2=open("h:\\pqr.txt","w")
data=f1.read()
data=data.title()

for x in data:
    f2.write(x)

f1.close()
f2.close()
print("Copied")