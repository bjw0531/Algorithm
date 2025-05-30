n = int(input())
l = []

for i in range(n):
    a = int(input())
    l.append(a)
    
l.sort()

mx = -1e9
for i in range(n):
    mx = max(mx, l[i] * (n-i))

print(mx)