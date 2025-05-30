a = list(map(int, input().split()))
b = int(input())
seconds = a[0] * 3600 + a[1] * 60 + a[2]

seconds += b

seconds %= 86400
hour = seconds // 3600
seconds -= 3600 * hour


seconds %= 3600
minute = seconds // 60
seconds -= 60 * minute

print(hour, minute, seconds)