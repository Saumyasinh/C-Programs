days=int(input("Enter number of days:"))
y=days//365
m=(days%365)//30
d=(days%365)%30
print(y,"Years",m,"Months",d,"Days")