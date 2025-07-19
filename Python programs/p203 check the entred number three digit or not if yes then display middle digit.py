num = int(input("Enter number :"))
l=len(str(num))
if l != 3:
    print("Enter three digit number only.")
else:
    print("Middle digit is ",(((num)%100)//10))
