while True:
   print("press a for add ")
   print("Press s for sub")
   print("Press m for mul")
   print("Press d fro Div")
   print("Press z for exit")
   op=int(input("Enter op =>"))
   if op=='a':
        x = int(input("Enter value of x =>"))
        y = int(input("Enter value of y =>"))
        print("Add =",x+y)
   elif op=='s':
        x = int(input("Enter value of x =>"))
        y = int(input("Enter value of y =>"))
        print("Sub =",x-y)
   elif op=='m':
        x = int(input("Enter value of x =>"))
        y = int(input("Enter value of y =>"))
        print("Mul =",x*y)
   elif op=='d':
        x = int(input("Enter value of x =>"))
        y = int(input("Enter value of y =>"))
        print("Div =",x/y)
   elif op=='z':
        break
   else:
        print("Wrong opt")
