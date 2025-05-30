n, k = map(int, input().split())
arr = list(map(int, input().split()))

s = 0
e = k - 1
total = 0
mx = 0

for i in range(k):
    total += arr[i]
mx = total

for i in range(n - k):
    total -= arr[s]
    s += 1
    e += 1
    total += arr[e]
    mx = max(total,mx)

print(mx)