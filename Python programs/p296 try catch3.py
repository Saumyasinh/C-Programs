try:
    a=int(input("Enter marks of English =>"))
    b=int(input("Enter marks of Hindi =>"))

    if a<0:
        print("Enter valid marks in English")
    elif b<0:
        print("Enter valid marks in Hindi")
    else:
        ans=a+b
        print("Total marks =",ans)
except:
    print("Other Error")