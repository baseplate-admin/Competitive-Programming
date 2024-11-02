inp = str(input())


def given_num_return_iter(inp: str):
    return list(map(int, [*inp]))


nums = given_num_return_iter(inp)

i = 0

while len(nums) > 1:
    nums = given_num_return_iter(str(sum(nums)))
    i += 1

print(i)
