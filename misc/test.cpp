#include<bits/stdc++.h>

using namespace std;

int main() {
    int h, m, h1, m1, x, t1, t2;
    cin>>h>>m>>h1>>m1>>x;
    t1=(h*60)+m;
    t2=(h1*60)+m1;
    x*=60;
    cout<<(x-(t2-t1))<<endl;
    return 0;
}