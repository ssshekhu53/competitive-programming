// Longest Arithmetic
// https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ff47/00000000003bf4ed

#include<bits/stdc++.h>

using namespace std;

int longestArithmetic(int arr[], int n)
{
    int i, diff=0, longAr=0, prevLong=0;
    for(i=0; i<n-1; i++) 
    {
        if(i==0)
        {
            diff=(arr[i]-arr[i+1]);
            longAr=1;
            prevLong=1;
        }
        else if((arr[i]-arr[i+1])==diff)
        {
            diff=(arr[i]-arr[i+1]);
            longAr++;
        }
        else
        {
            diff=(arr[i]-arr[i+1]);
            prevLong=max(prevLong, longAr);
            longAr=1;
        }
        // cout<<arr[i]<<" - "<<arr[i+1]<<" - "<<(arr[i]-arr[i+1])<<" - "<<((arr[i]-arr[i+1])==diff?"True":"False")<<" - "<<longAr<<" - "<<prevLong<<endl;
    }
    prevLong=max(prevLong, longAr);
    return prevLong+1;
}

int main() 
{
    int t, n, i;
    cin>>t;
    while(t--) 
    {
        cin>>n;
        int arr[n];
        for(i=0; i<n; i++)
            cin>>arr[i];
        // for(i=0; i<n; i++)
        //     cout<<arr[i]<<" ";
        // cout<<endl;
        cout<<longestArithmetic(arr, n);
        cout<<endl;
    }
    return 0;
}