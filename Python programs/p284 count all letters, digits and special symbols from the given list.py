def find_digits_chars_symbols(x):
    char_c = 0
    digit_c = 0
    symbol_c = 0
    for char in x:
        if char.isalpha():
            char_c+=1
        elif char.isdigit():
            digit_c+=1
        else:
            symbol_c+=1
    print("Chars :",char_c,"Digits :",digit_c,"Symbols :",symbol_c)
sample_str="p@yn2at&#i5Ve"
print("Total counts of chars,Digits, and symbols are =>\n")
find_digits_chars_symbols(sample_str)