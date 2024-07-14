database = {}

ask = int(input())

for i in range(0, ask):
    test = str(input())
    database.setdefault(test, -1)
    database[test] += 1

    if database[test] == 0:
        print("OK")
    else:
        print(test + str(database[test]))
