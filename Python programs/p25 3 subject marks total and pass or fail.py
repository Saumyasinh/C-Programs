marks1 = int(input("Enter marks of hindi =>"))
marks2 = int(input("Enter marks of english =>"))
marks3 = int(input("Enter marks of maths =>"))

total = marks1 + marks2 + marks3
print("your total =",total)

if total>50:
    print("you are pass")
else:
    print("you are fail")
