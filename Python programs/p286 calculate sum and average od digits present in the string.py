input_str="P!@#$%^&*()29:><8496"
t=0
c=0
for char in input_str:
    if char.isdigit():
        t+=int(char)
        c+=1
avg=t/c
print("Sum is :",t,"\nAverage is :",avg)