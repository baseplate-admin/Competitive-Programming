import math

inp = list(map(int, input().split(" ")))

area = inp[0] * inp[1]

print(math.floor(area / 2))
