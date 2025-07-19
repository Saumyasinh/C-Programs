tax=0
pr=int(input("Enter the price of bike :"))
if pr > 100000:
    tax = pr*15/100
elif pr > 50000 and pr <=100000:
    tax = pr*10/100
else:
    tax = pr*5/100
print("Tax to be paid",tax)