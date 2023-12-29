# 6 6 4
import math

_input = list(map(int, input().split()))
n: int = _input[0]
m: int = _input[1]
a: int = _input[2]

x = math.ceil(m / a)
y = math.ceil(n / a)

print(x * y)
