num1 = int(input("Enter first number =>"))
num2 = int(input("Enter second number =>"))

ch = input("Enter value =>")

result = 0
if ch == 'a':
    result = num1 + num2
elif ch == 'b':
    result = num1 - num2
elif ch == 'c':
    result = num1 * num2
elif ch == 'd':
    result = num1 / num2

print(result)

