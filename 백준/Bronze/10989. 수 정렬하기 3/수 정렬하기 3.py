import sys

input = sys.stdin.readline

l = [0] * 10005

n = int(input().rstrip())

for _ in range(n):
    a = int(input().rstrip())
    l[a] += 1

for i in range(len(l)):
    if l[i] == 0:
        continue
    for _ in range(l[i]):
        print(i)