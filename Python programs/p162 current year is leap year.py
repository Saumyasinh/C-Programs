import time
current = time.localtime(time.time())
year=current.tm_year

if year % 4 ==0:
    print("year is leap year")
else:
    print("year is not an leap year")