// Sock Merchant
// https://www.hackerrank.com/challenges/sock-merchant/problem

#include<bits/stdc++.h>

using namespace std;

int sockMerchant(int n, vector<int> ar) {
    unordered_set<int> setar;
    int i, countTemp, count;
    count=countTemp=0;
    sort(ar.begin(), ar.end());
    for(i=0; i<n; i++)
        cout<<ar[i]<<" ";
    cout<<endl;
    for(i=0; i<ar.size(); i++)
    {
        if(setar.find(ar[i])==setar.end()) {
            countTemp=0;
            setar.insert(ar[i]);
        }
        else
            countTemp++;
    }
    count+=((countTemp/2)+(countTemp%2));
    return count;
}

int main() 
{
    int n, temp, i;
    vector<int> ar;
    cin>>n;
    for(i=0; i<n; i++) {
        cin>>temp;
        ar.push_back(temp);
    }
    cout<<sockMerchant(n, ar)<<endl;
    return 0;
}