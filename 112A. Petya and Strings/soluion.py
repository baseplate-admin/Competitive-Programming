string_1 = input().lower()
string_2 = input().lower()

if string_1 < string_2:
    print(-1)
elif string_2 < string_1:
    print(1)
elif string_1 == string_2:
    print(0)
