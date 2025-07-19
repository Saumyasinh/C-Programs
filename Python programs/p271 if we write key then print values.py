d1={1:"Sam",2:"Vivaan",3:"Veer",4:"Virat",5:"Dhanush"}
y=int(input("Enter value to find =>"))

list1=[]
for y in d1:
    list1.append(d1[y])

c=0
for k,v in d1.items():
    if v==y:
        print(k,v)
        c=1
        break

if c==0:
    print(v)
else:
    print("Not found")