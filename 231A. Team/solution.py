no_of_inputs = int(input())

can_answer = 0
for _ in range(0, no_of_inputs):
    ask = list(map(int, input().split(" ")))
    no_of_yes = 0
    for i in ask:
        if i == 1:
            no_of_yes += 1

    if no_of_yes >= 2:
        can_answer += 1

print(can_answer)
