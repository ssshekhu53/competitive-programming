# # def search(A, N):
# #     lLimit=0
# #     uLimit=N-1
# #     mid=(lLimit+uLimit)//2
# #     while(lLimit<uLimit and lLimit<mid):
# #         print(mid)
# #         if(A[mid]!=A[mid-1] and A[mid]!=A[mid+1]):
# #             break
# #         elif(A[mid]==A[mid-1]):
# #             lLimit=mid
# #         else:
# #             uLimit=mid
# #         mid=(lLimit+uLimit)//2
    
# #     return A[mid]

# # a = input().split()
# # a = [int(i) for i in a]
# # for i in range(0, len(a)):
# #     print(i, end="\t")
# # print()
# # for i in a:
# #     print(i, end="\t")
# # print()

# # print(search(a, len(a)))

# def checkKaprekarNumber(n):
#     if n == 1:
#         return True
#     temp = n
#     d = len(str(n))
#     n *= n
#     n = str(n)
#     if len(n) < 2:
#         return False
#     d = d if len(n) % 2 == 0 else d - 1
#     l = int(n[0:d])
#     r = int(n[d:])
#     return temp == (l + r)

# def kaprekarNumbers(p, q):
#     # Write your code here
#     for i in range(p, q+1):
#         if checkKaprekarNumber(i):
#             print(i, end=" ")
    

# if __name__ == '__main__':
#     p = int(input().strip())

#     q = int(input().strip())

#     kaprekarNumbers(p, q)
#     # checkKaprekarNumber(q)


# arr = list(map(int, input().split()))
# sum = 0
# arr.sort()
# temp = 0
# for i in range(len(arr)-1):
#     sum += arr[i]
#     if sum == arr[i+1]:
#         temp = sum
# print(temp)

# class Solution:
#     def numOfWays(self, nums):
#         n = len(nums)
#         table = [[1] * (n + 1) for _ in range(n+1)]
#         for i in range(2, n+1):
#             for j in range(1, i):
#                 table[i][j] = sum(table[i-1][j-1:j+1])

# s = input()
# countHash = 0
# countAsterisk = 0
# for c in s:
#     if c == '#':
#         countHash += 1
#     else:
#         countAsterisk += 1
# print(countAsterisk - countHash)

# weekdays = {
#     'mon': 6,
#     'tue': 5,
#     'wed': 4,
#     'thu': 3,
#     'fri': 2,
#     'sat': 1,
#     'sun': 0,
# }
# start = input()
# days = int(input())
# sundays = days // 7
# days %= 7
# if (days + weekdays[start]) >= 7:
#     sundays += 1
# print(sundays)

# def sumOfDigits(n):
#     sum = 0
#     while n > 0:
#         sum += (n % 10)
#         n //= 10
#     return sum

# n, k = input().split()
# n = int(n)
# k = int(k)
# count = 0
# for i in range(1, n+1):
#     sum = sumOfDigits(i)
#     if (i % k != 0) and (sum % k ==0):
#         count += 1
# print(count)

# import re
# def getNumbersFromString(s):
#     nums = re.findall(r'\d+', s)
#     nums = list(map(int, nums))
#     if len(nums) == 0:
#         nums.append("NA")
#     return nums

# s = input()
# print(getNumbersFromString(s))


from datetime import time, timedelta
h = int(input())
m = int(input())
h1 = int(input())
m1 = int(input())
x = int(input())

t1 = time(h, m)
t2 = time(h1, m1)
tc = t1 + timedelta(hours=x)
print(tc)