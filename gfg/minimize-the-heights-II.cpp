// Minimize the Heights II 
// https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1

#include<bits/stdc++.h>

using namespace std;

int getMinDiff(int arr[], int n, int k)
{
    int i, minValue=0;
    // sort(arr, arr+n);
    for(i=0; i<n; i++)
    {
        arr[i]=arr[i]-k<=0?arr[i]+k:min(arr[i]-k, minValue)==minValue?max(arr[i]-k, arr[i]+k):min(arr[i]-k, minValue);
        minValue=i==0?arr[i]:min(arr[i], minValue);
        cout<<arr[i]<<"-"<<minValue<<" ";
    }
    cout<<endl;
    sort(arr, arr+n);
    return arr[n-1]-arr[0];
}

int main() 
{
    int n, k, i;
    cin>>k>>n;
    int arr[n];
    for(i=0; i<n; i++)
        cin>>arr[i];
    sort(arr, arr+n);
    for(i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    cout<<getMinDiff(arr, n, k);
    cout<<endl;
    return 0;
}