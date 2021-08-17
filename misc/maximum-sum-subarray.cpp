/* 
Maximum sum in a sub array
n=5, arr=[1, 2, 3, 4, 5], sum=15
n=5, arr=[-1, 2, 3, 4, 5], sum=14
n=5, arr=[1, 2, 3, 4, -5], sum=10
n=5, arr=[1, 2, -3, 4, 5], sum=9
n=5, arr=[1, -2, 3, -4, 5], sum=4
*/


#include<bits/stdc++.h>

using namespace std;

int maxSum(int arr[], int n, int m)
{
    int sum, left, right;
    left=0;
    right=n;
    sum=arr[0];
    while(true)
    {
        if(right>0)
            sum=max(sum%m, accumulate(arr, arr+right, 0)%m);
        if(left<n)
            sum=max(sum%m, accumulate(arr+left, arr+n, 0)%m);
        if(left<=right)
            sum=max(sum%m, accumulate(arr+left, arr+right, 0)%m);
        left++;
        right--;
        if(left>=n && right<=1)
            break;
    }
    return sum;
}

int main() 
{
    int n, i, m;
    cin>>n>>m;
    int arr[n];
    for(i=0; i<n; i++)
        cin>>arr[i];
    // for(i=0; i<n; i++)
    //     cout<<arr[i]<<" ";
    // cout<<endl;
    cout<<maxSum(arr, n, m);
    cout<<endl;
    return 0;
}