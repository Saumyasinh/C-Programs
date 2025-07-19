try:
    a = int(input("Enter no1 =>"))
    b = int(input("Enter no2 =>"))
    ans = a / b
    print(ans)
except ZeroDivisionError:
    print("Buddhu why u entered 0")
except ValueError:
    print("Why u entered characters")
except:
    print("Other error")