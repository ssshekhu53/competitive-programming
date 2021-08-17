/* 
Given an array of integers, find the first repeating element in it. We need to find the element that occurs more than once and whose index of first occurrence is smallest. 

Examples: 

Input:  arr[] = {10, 5, 3, 4, 3, 5, 6}
Output: 5 [5 is the first element that repeats]
10 5 3 4 3 5 6

Input:  arr[] = {6, 10, 5, 4, 9, 120, 4, 6, 10}
Output: 6 [6 is the first element that repeats]
6 10 5 4 9 120 4 6 10
*/


#include<bits/stdc++.h>

using namespace std;

int firstRepeating(int arr[], int n)
{
    int i;
    unordered_set<int> s;
    for(i=0; i<n/2; i++) 
    {
        if(s.find(arr[i])!=s.end())
            return i;
        s.insert(arr[i]);
        if(s.find(arr[n-(i+1)])!=s.end())
            return n-(i+1);
        // s.insert(arr[n-(i+1)]);
    }
    return -1;
}

int main() 
{
    int n, i;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
        cin>>arr[i];
    // for(i=0; i<n; i++)
    //     cout<<arr[i]<<" ";
    // cout<<endl;
    cout<<arr[firstRepeating(arr, n)];
    cout<<endl;
    return 0;
}