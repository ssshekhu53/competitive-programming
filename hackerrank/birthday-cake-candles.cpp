// Birthday Cake Candles
// https://www.hackerrank.com/challenges/birthday-cake-candles/problem

#include<bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(vector<int> candles) {
    auto tallest=max_element(candles.begin(), candles.end());
    int count=0;
    for(auto itr=candles.begin(); itr!=candles.end(); itr++) {
        count+=(*itr==*tallest)?1:0;
    }
    return count;
}

int main() 
{
    vector<int> arr;
    int i, n, candle;
    cin>>n;
    for(i=0; i<n; i++) {
        cin>>candle;
        arr.push_back(candle);
    }
    cout<<birthdayCakeCandles(arr)<<endl;
    return 0;
}