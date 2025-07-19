t=(1,2,3,4,5,6,7,8,9,10)
max=t[0]
min=t[0]
for i in t:
    if(i>max):
        max=i
    if(i<min):
        min=i
print(max)
print(min)