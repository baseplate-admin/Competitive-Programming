inp = map(str, input(""))

_second_list = []

for i in inp:
    if i.lower() not in "aeiouy":
        _second_list.append(i.lower())

print(".".join(["", *_second_list]))
