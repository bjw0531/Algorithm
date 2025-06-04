bb1 = list(map(int, input().split()))
bb2 = list(map(int, input().split()))
invisible = list(map(int, input().split()))

for idx, value in enumerate(bb1):
    bb1[idx] = value + 1000

for idx, value in enumerate(bb2):
    bb2[idx] = value + 1000
    
for idx, value in enumerate(invisible):
    invisible[idx] = value + 1000

world = [[0] * 2005 for _ in range(2005)]

for y in range(bb1[1], bb1[3]):
    for x in range(bb1[0], bb1[2]):
        world[y][x] = 1

for y in range(bb2[1], bb2[3]):
    for x in range(bb2[0], bb2[2]):
        world[y][x] = 1

for y in range(invisible[1], invisible[3]):
    for x in range(invisible[0], invisible[2]):
        world[y][x] = 0
        
total = 0
for y in world:
    total += y.count(1)


print(total)