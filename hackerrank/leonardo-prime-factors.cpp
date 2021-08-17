// Leonardo's Prime Factors
// https://www.hackerrank.com/challenges/leonardo-and-prime/problem

#include<bits/stdc++.h>

using namespace std;

int primeCount(long n) {
    int count=0, max=0;
    char ch;
    for(long i=1; i<=n; i++) {
        long temp=i;
        for(long j=2; j<=temp; j++) {
            if(temp%j==0) {
                cout<<temp<<" "<<j<<" "<<i<<" "<<(temp%j)<<" "<<count<<" "<<endl;
                count++;
                temp/=j;
                // cin.get();
            }
        }
        max=std::max(count, max);
        count=0;
    }
    return max;
}

int main() 
{
    int t;
    cin>>t;
    while(t--) {
        long n;
        cin>>n;
        cout<<primeCount(n)<<endl;
    }
    cout<<endl;
    return 0;
}