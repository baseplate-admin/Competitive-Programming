# 6 6 4

_input = list(map(int, input().split()))
n: int = _input[0]
m: int = _input[1]
a: int = _input[2]

x = (n / a) if (n) % a == 0 else (n / a) + 1
y = (m / a) if (m) % a == 0 else (m / a) + 1


print(x * y)
