inp = list(map(int, input().split("+")))

inp.sort()

print(inp[0], end="")
for i in inp[1::]:
    print(f"+{i}", end="")
print("")
