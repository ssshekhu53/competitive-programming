# Q. Variable sized array
# https://www.hackerrank.com/challenges/variable-sized-arrays/problem

n, q = [int(x) for x in input().split()]
ar = []

for i in range(n):
    ar.append([int(x) for x in input().split()])

for i in range(q):
    i, j = [int(x) for x in input().split()]
    print(ar[i][j])