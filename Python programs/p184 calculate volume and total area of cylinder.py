import math
r=int(input("Enter radius :"))
h=int(input("Enter height :"))
p=math.pi
area=(2*p*r*r)+(2*p*r*h)
volume=p*r*h
print("Area of cylinder =",area)
print("Volume of cylinder =",volume)