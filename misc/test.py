# def search(A, N):
#     lLimit=0
#     uLimit=N-1
#     mid=(lLimit+uLimit)//2
#     while(lLimit<uLimit and lLimit<mid):
#         print(mid)
#         if(A[mid]!=A[mid-1] and A[mid]!=A[mid+1]):
#             break
#         elif(A[mid]==A[mid-1]):
#             lLimit=mid
#         else:
#             uLimit=mid
#         mid=(lLimit+uLimit)//2
    
#     return A[mid]

# a = input().split()
# a = [int(i) for i in a]
# for i in range(0, len(a)):
#     print(i, end="\t")
# print()
# for i in a:
#     print(i, end="\t")
# print()

# print(search(a, len(a)))

def checkKaprekarNumber(n):
    if n == 1:
        return True
    temp = n
    d = len(str(n))
    n *= n
    n = str(n)
    if len(n) < 2:
        return False
    d = d if len(n) % 2 == 0 else d - 1
    l = int(n[0:d])
    r = int(n[d:])
    return temp == (l + r)

def kaprekarNumbers(p, q):
    # Write your code here
    for i in range(p, q+1):
        if checkKaprekarNumber(i):
            print(i, end=" ")
    

if __name__ == '__main__':
    p = int(input().strip())

    q = int(input().strip())

    kaprekarNumbers(p, q)
    # checkKaprekarNumber(q)

