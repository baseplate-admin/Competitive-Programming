import math

_first_input = input()
_second_input = input()
_third_input = input()

x1, y1 = list(map(float, _first_input.split(" ")))
x2, y2 = list(map(float, _second_input.split(" ")))
x3, y3 = list(map(float, _third_input.split(" ")))


# area = abs((1 / 2) * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)))


# max_val = max([x1, y1, x2, y2, x3, y3])
# print(area)
def get_distance_between_two_points(x1: float, y1: float, x2: float, y2: float):
    return math.sqrt((abs(x2 - x1) ** 2) + (abs(y2 - y1) ** 2))


a = get_distance_between_two_points(x1=x1, x2=x2, y1=y1, y2=y2)
b = get_distance_between_two_points(x1=x2, x2=x3, y1=y2, y2=y3)
c = get_distance_between_two_points(x1=x3, x2=x1, y1=y3, y2=y1)


s = (a + b + c) / 2


area = math.sqrt(s * (s - a) * (s - b) * (s - c))
print(area)

"""
71.756151 7.532275
-48.634784 100.159986
91.778633 158.107739
"""
"""
0.000000 0.000000
1.000000 1.000000
0.000000 1.000000
"""
"""
18.716839 40.852752
66.147248 -4.083161
111.083161 43.347248
"""
