stone = int(input())

# 가져가야할 돌
num = 1

# 플레이어; 푸앙 = 1 친구 = 2
player = 1

# 결과
result = 0


while stone > 0:
    stone -= num

    # print("----------")
    # print("돌 개수 : %d"%stone)
    # print("플레이어 : %d"%player)
    # print("가져간 돌 개수 : %d"%num)
    
    if stone <= 0:
        if player == 1:
            result = abs(stone)
            break
        elif player == 2:
            if stone == 0:
                result = num+1
                break
            else:
                result = 0
                break

    num += 1
    if player == 1:
        player = 2
    else:
        player = 1

print(result)

    
