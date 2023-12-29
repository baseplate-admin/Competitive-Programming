_input_list = []
while True:
    i = input()
    if i != "":
        _input_list.append(i)
    else:
        break

participants = 0
bytes_send = 0

for i in _input_list:
    if i[0] == "+":
        participants += 1
        continue
    elif i[0] == "-":
        participants -= 1
        continue

    text = i.split(":")[-1]
    bytes_send += len(text) * participants

print(bytes_send)
