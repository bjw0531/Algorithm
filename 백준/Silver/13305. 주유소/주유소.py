import sys
import re
input = sys.stdin.readline

fuel = 0
price = []
edge = []
lowprice = []
lowest = 2e10
ans = 0

n = int(input())
edge = list(map(int, input().split()))
price = list(map(int, input().split()))
price.pop()

for i, v in enumerate(price):
    if v < lowest:
        lowest = v

    ans += edge[i] * lowest


print(ans)
