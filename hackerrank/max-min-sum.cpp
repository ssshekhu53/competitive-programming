// Mini-Max Sum
// https://www.hackerrank.com/challenges/mini-max-sum/problem

#include<bits/stdc++.h>

using namespace std;

void miniMaxSum(vector<int> arr) {
    sort(arr.begin(), arr.end());
    cout<<accumulate(&arr[0], &arr[4], 0)<<" "<<accumulate(&arr[1], &arr[5], 0);
}

int main() 
{
    vector<int> arr;
    int i, n;
    for(i=0; i<5; i++) {
        cin>>n;
        arr.push_back(n);
    }
    miniMaxSum(arr);
    cout<<endl;
    return 0;
}