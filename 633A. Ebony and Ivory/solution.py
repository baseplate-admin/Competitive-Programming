ask = list(map(int, input().split(" ")))

ebony = ask[0]
ivory = ask[1]
total_health = ask[2]


ans = False
for i in range(0, 100):
    rem = total_health - (ebony * i)

    if rem < 0:
        break

    if rem % ivory == 0:
        ans = True
        break

print("Yes" if ans else "No")
