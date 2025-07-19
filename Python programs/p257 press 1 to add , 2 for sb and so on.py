while True:
   print("press 1 for add ")
   print("Press 2 for sub")
   print("Press 3 for mul")
   print("Press 4 fro Div")
   print("Press 5 for exit")
   op=int(input("Enter op =>"))
   if op==1:
        x = int(input("Enter value of x =>"))
        y = int(input("Enter value of y =>"))
        print("Add =",x+y)
   elif op==2:
        x = int(input("Enter value of x =>"))
        y = int(input("Enter value of y =>"))
        print("Sub =",x-y)
   elif op==3:
        x = int(input("Enter value of x =>"))
        y = int(input("Enter value of y =>"))
        print("Mul =",x*y)
   elif op==4:
        x = int(input("Enter value of x =>"))
        y = int(input("Enter value of y =>"))
        print("Div =",x/y)
   elif op==5:
        break
   else:
        print("Wrong opt")
