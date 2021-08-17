// Minimum Distances
// https://www.hackerrank.com/challenges/minimum-distances/problem

#include <bits/stdc++.h>

using namespace std;

int minimumDistances(vector<int> a) {
    int min=INT_MAX;
    int n=a.size();
    bool flag=true;
    for(int i=0; i<n; i++) {
        int j=i+1;
        while(j<(n-j)) {
            if(a[j]==a[i]) { 
                min=std::min(abs(i-j), min);
                flag=false;
            }
            if(a[n-j]==a[i] && i!=(n-j)) {
                min=std::min(abs(i-(n-j)), min);
                flag=false;
            }
            j++;
        }
    }
    return !flag?min:-1;
}

int main()
{
    int n;
    cin>>n;
    int temp;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin>>temp;
        a.push_back(temp);
    }

    int result = minimumDistances(a);

    cout << result << "\n";

    return 0;
}