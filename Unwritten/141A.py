first = str(input())
second = str(input())
third = str(input())

third = list(third)

try:
    for i in first+second:
        third.remove(i)
except ValueError:
    print("NO")
    exit()
    
if len(third) == 0:
    print("YES")
else:
    print("NO")
