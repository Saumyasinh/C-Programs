print("Press + for add")
print("Press - for sub")
ch = input("Enter value =>")

if ch == '+':
    num1 = int(input("Enter first number =>"))
    num2 = int(input("Enter second number =>"))
    result = num1 + num2
    print("Result =",result)
elif ch == '-':
    num1 = int(input("Enter first number =>"))
    num2 = int(input("Enter second number =>"))
    result = num1 - num2
    print("Result =", result)
elif ch == '*':
    num1 = int(input("Enter first number =>"))
    num2 = int(input("Enter second number =>"))
    result = num1 * num2
    print("Result =", result)
elif ch == '/':
    num1 = int(input("Enter first number =>"))
    num2 = int(input("Enter second number =>"))
    result = num1 / num2
    print("Result =", result)
else:
    print("Wrong")

