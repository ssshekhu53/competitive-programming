// C++ code for Maximum size square
// sub-matrix with all 1s
#include <bits/stdc++.h>
#define bool int
#define R 6
#define C 5
using namespace std;


int largetArea(vector<vector<int>> samples)
{
	int i, j, n;
    n=samples.size();
	int S[n][n];
	int max_of_s, max_i, max_j;
    int area=0;
	
	for(i = 0; i < n; i++)
		S[i][0] = samples[i][0];
	
	for(j = 0; j < n; j++)
		S[0][j] = samples[0][j];
		
	for(i = 1; i < n; i++)
	{
		for(j = 1; j < n; j++)
		{
			if(samples[i][j] == 1)
				S[i][j] = min(S[i][j-1],min( S[i-1][j],
								S[i-1][j-1])) + 1;
			else
				S[i][j] = 0;
		}
	}
	
	max_of_s = S[0][0]; max_i = 0; max_j = 0;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(max_of_s < S[i][j])
			{
				max_of_s = S[i][j];
				max_i = i;
				max_j = j;
			}
		}			
	}

    area=(max_i-(max_i-max_of_s))*(max_j-(max_j-max_of_s));
    return area;
}


/* Driver code */
int main()
{
	vector<vector<int>> M[R][C] = {{0, 1, 1, 0, 1},
					{1, 1, 0, 1, 0},
					{0, 1, 1, 1, 0},
					{1, 1, 1, 1, 0},
					{1, 1, 1, 1, 1},
					{0, 0, 0, 0, 0}};
					
	cout<<largetArea(M);
}

// This is code is contributed by rathbhupendra
