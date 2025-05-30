def f(a,b):
    if a%b == 0:
        return b
    return f(b , a%b)

a,b = map(int, input().split())
c = f(max(a,b), min(a,b))
print(c)
print(int(a * b / c))