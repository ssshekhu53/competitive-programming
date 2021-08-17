# Find Substring from last of the Given String
# https://practice.geeksforgeeks.org/problems/find-substring-from-last-of-the-given-string3440/1/?category[]=Strings&category[]=Strings&difficulty[]=-1&page=2&query=category[]Stringsdifficulty[]-1page2category[]Strings#

#User function Template for python3
class Solution:
    def search(self, X, Y):
        i = 0
        index = -1
        temp = ""
        while i < len(X):
            temp += (X[i])
            print(temp)
            if len(temp) == len(Y):
                if temp == Y:
                    index = i - len(Y) + 2
                    i = i - len(Y) + 1
                temp = X[i]
            i += 1
        return index

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		x,y = input().split()

		ob = Solution()
		answer = ob.search(x, y)
		print(answer)

# } Driver Code Ends