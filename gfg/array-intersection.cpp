#include<bits/stdc++.h>

using namespace std;

int NumberofElementsInIntersection (int a[], int b[], int n, int m )
{
    // Your code goes here
    unordered_set<int> s1, s2;
    int i=0, count=0;
    
    while(i<n || i<m)
    {
        if(i<n)
            s1.insert(a[i]);
        if(i<m)
            s2.insert(b[i]);
        i++;
    }
    
    i=0;
    for(auto itr=s1.begin(); itr!=s2.end(); itr++)
    {
        if(s2.find(*itr)!=s2.end())
            count++;
        i++;
    }
    return count;
}

int main() 
{
    int n, m, i;
    cin>>n>>m;
    int a[n], b[m];
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<m; i++)
        cin>>b[i];
    cout<<NumberofElementsInIntersection(a, b, n, m)<<endl;
    return 0;
}