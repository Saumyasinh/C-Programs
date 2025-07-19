import time
current = time.localtime(time.time())
print("Hour:",current.tm_hour)

if current.tm_hour < 12:
    print("Good Morning")
if current.tm_hour > 12:
    print("Good Evening")
if current.tm_hour < 6:
    print("Good Night")
