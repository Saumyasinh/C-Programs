test_str="Hello welcome"
print("The original string is : "+test_str)
new_str=""
print("Enter index number which you want to skip =>")
j=int(input())
for i in range(len(test_str)):
    if i!=j:
        new_str=new_str+test_str[i]
print("The string after removal of i`th character :",new_str)