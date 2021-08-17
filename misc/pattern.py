n = int(input())
k = 1
for i in range(n, 0, -1):
    for j in range(i):
        if j % 2 != 0:
            print(k, end="")
            k = k + 1
        else:
            print("*", end="")
    print()