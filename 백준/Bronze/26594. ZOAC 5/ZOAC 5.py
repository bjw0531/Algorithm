string = input()

cnt = 0
d = string[0]
for i in string:
    if i != d:
        break
    cnt += 1

print(cnt)