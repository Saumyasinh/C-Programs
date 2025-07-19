import time
current = time.localtime(time.time())
print("Hour:",current.tm_hour)

if current.tm_hour < 12:
    print("AM")
if current.tm_hour > 12:
    print("PM")
