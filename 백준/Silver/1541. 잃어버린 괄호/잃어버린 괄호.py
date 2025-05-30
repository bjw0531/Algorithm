import sys
import re
input = sys.stdin.readline

inp = input()

nums = list(map(int, inp.replace("-", "+").split("+")))
chars = list(re.sub(r'\d', '', inp).replace("\n", ""))
chars.insert(0, "+")

i = 0
flag = False
ans = 0
for i in range(len(nums)):
    if chars[i] == "-":
        flag = True

    if flag == True:
        ans -= nums[i]

    else:
        ans += nums[i]

print(ans)