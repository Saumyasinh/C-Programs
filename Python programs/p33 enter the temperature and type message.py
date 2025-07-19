temp=int(input("Enter value of temperature =>"))

if temp<0:
    print("Freezing Atmosphere")
elif temp<10:
    print("Cold Atmosphere")
elif temp<20:
    print("Normal Atmosphere")
elif temp<30:
    print("Hot Atmosphere")
else:
    print("Very Hot Atmosphere")
