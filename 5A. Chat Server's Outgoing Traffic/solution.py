import sys

_input_list = []
# while True:
#     i = input()
#     if i != "":
#         _input_list.append(i)
#     else:
#         break

# Hack is from
# https://codeforces.com/blog/entry/54228
for line in sys.stdin:
    if line != "":
        _input_list.append(line)

participants = 0
bytes_send = 0

for i in _input_list:
    i = i.replace("\n", "")
    if i[0] == "+":
        participants += 1
        continue
    elif i[0] == "-":
        participants -= 1
        continue

    text = i.split(":")[-1]
    bytes_send += len(text) * participants

print(bytes_send)
