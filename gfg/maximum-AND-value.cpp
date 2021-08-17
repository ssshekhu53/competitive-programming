// Maximum AND Value
// https://practice.geeksforgeeks.org/problems/maximum-and-value-1587115620/1

#include<bits/stdc++.h>

using namespace std;

int maxAND (int arr[], int N)
{
    int n, i, max=-1;
    sort(arr, arr+N);
    reverse(arr, arr+n);
    for(i=0; i<N-1; i++)
    {
        if((arr[i] & arr[i+1])>max)
            max=(arr[i] & arr[i+1]);
    }
    return max;
}

int main() 
{
    int n, i;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
        cin>>arr[i];
    cout<<maxAND(arr, n);
    cout<<endl;
    return 0;
}