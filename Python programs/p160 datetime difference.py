import datetime
today = datetime.date.today()
birthDate = datetime.date(1982,12,21)
age = today.year - birthDate.year
print(age)