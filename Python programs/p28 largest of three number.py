num1 = int(input("Enter number1 =>"))
num2 = int(input("Enter number2 =>"))
num3 = int(input("Enter number3 =>"))

if num1 >= num2 and num1 >= num3:
    print("The 1st number is greatest among three")
elif num2 >= num1 and num2 >= num3:
    print("The 2nd number is greatest among three")
elif num3 >= num2 and num3 >= num1:
    print("The 3rd number is gratest among the three")

