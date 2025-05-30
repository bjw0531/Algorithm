arr = list(map(int,input().split()))
a = arr[0]
b = arr[1]

if b == 1 or b ==2:
    print("NEWBIE!")
elif b>2 and b<=a:
    print("OLDBIE!")
else:
    print("TLE!")