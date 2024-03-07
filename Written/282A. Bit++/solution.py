no_of_turns = int(input())


actual = 0

for i in range(0, no_of_turns):
    ask = input()
    if "--" in ask:
        actual -= 1
    elif "++" in ask:
        actual += 1

print(actual)