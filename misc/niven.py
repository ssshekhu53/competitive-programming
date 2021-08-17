
def CheckNivenNumber(n):
    temp = n
    sum = 0
    while temp > 0:
        sum += (temp % 10)
        temp //= 10
    return n // sum if n % sum == 0 else 0

n = int(input())
print(CheckNivenNumber(n))