// Find duplicates in an array
// https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1/?category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Mathematical&category[]=Arrays&category[]=Strings&company[]=Amazon&company[]=Amazon&problemType=functional&difficulty[]=0&difficulty[]=1&page=1&sortBy=submissions&query=category[]Mathematicalcategory[]Arrayscategory[]Stringscompany[]AmazonproblemTypefunctionaldifficulty[]0difficulty[]1page1sortBysubmissionscompany[]Amazoncategory[]Mathematicalcategory[]Arrayscategory[]Strings

#include<bits/stdc++.h>

using namespace std;

class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        vector<int> duplicates;
        map<int, int> m;
        int i;

        for(i=0; i<n; i++)
            m[arr[i]]++;

        for(auto obj: m)
            if(obj.second>1)
                duplicates.push_back(obj.first);

        if(duplicates.size()==0)
            duplicates.push_back(-1);
            
        return duplicates;
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}