n = int(input())
final = 0
for i in range(n):
    f = input()
    if f == "++X":
        final+= 1
    elif f == "X++":
        final += 1
    elif f == "X--":
        final -= 1
    elif f == "--X":
        final-= 1

print(final)