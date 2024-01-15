no_of_cases = int(input())

solution_list = []

for i in range(0, no_of_cases):
    word = input()
    if word_length := len(word) > 10:
        solution_list.append(f"{word[0]}{word_length-2}{word[-1]}")
    else:
        solution_list.append(word)


print("\n".join(solution_list))
