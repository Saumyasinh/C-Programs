s1=int(input("Enter marks of subject1 :"))
s2=int(input("Enter marks of subject2 :"))
s3=int(input("Enter marks of subject3 :"))
print("Give choice.\n 1.total 2.average 3.credit")
c=int(input("Enter choice :"))
if(c==1):
    print("Total =",s1+s2+s3)
elif(c==2):
    print("Average =",(s1+s2+s3)/3)
elif(c==3):
    print("Credit for s1=5\n Credit for s2=7\n Credit for s3=9")
else:
    print("Enter correct choice.")