index = list(map(int, input().split(" ")))[-1]

inputs = list(map(int, input().split(" ")))

actual_index = inputs[index - 1]

participants = 0
for i in inputs:
    if i == 0:
        continue
    if i >= actual_index:
        participants += 1


print(participants)
