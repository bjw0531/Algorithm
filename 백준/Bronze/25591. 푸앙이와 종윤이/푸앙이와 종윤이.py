Input = list(map(int,input().split()))

a = 100 - Input[0]
b = 100 - Input[1]

c = 100 - (a+b)
d = a*b

q = d // 100
r = d % 100

first = c+q
second = r

print(a,b,c,d,q,r)
print(first,second)
