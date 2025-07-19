str=input("Enter syntax =>")
list1=['a','e','i','o','u','A','E','I','O',"U"]
for ch in str:
    if ch in list1:
        print(ch,end=',')
