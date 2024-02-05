import sys

ask = list(map(int, input().split(" ")))

ebony = ask[0]
ivory = ask[1]
total_health = ask[2]


remaining_health = total_health / ebony
print(remaining_health)
