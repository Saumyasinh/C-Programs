num1 = int(input("Enter number1 :"))
num2 = int(input("Enter number2 :"))
Choice = int(input("Enter choice :"))
if Choice==1:
    print("Addition is :",num1+num2)
elif Choice==2:
    print("Subtraction is :",num1,num2)
elif Choice==3:
    print("Multiplication is :",num1*num2)
elif Choice==4:
    print("Division is :",num1/num2)
elif Choice==5:
    print("Reminder is :",num1%num2)
else:
    print("Invalid Choice")