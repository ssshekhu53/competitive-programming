// Frequency of vector

#include<bits/stdc++.h>

using namespace std;

map<int, int> vectorFrequency(vector<int> v) {
    map<int, int> m;
    for(auto &item: v)
        if(m.find(item)!=m.end())
            m[item]++;
        else
            m[item]=1;
    return m;
}

pair<int, int> maxVectorFreqeuncy(map<int, int> m) {
    pair<char, int> p;
    p=make_pair(m.begin()->first, m.begin()->second);
    for(auto itr=m.begin(); itr!=m.end(); itr++) {
        if(itr->second>p.second) {
            p.first=itr->first;
            p.second=itr->second;
        }
    }
    return p;
}

pair<int, int> countFrequency(vector<int> v) {
    sort(v.begin(), v.end());
    int temp, count, maxCount, maxNum;
    maxNum=temp=v[0];
    count=maxCount=0;
    for(auto &item: v) {
        if(item==temp)
            count++;
        else {
            maxNum=maxCount<count?temp:maxNum;
            maxCount=max(maxCount, count);
            count=1;
            temp=item;
        }
    }
    maxNum=maxCount<count?temp:maxNum;
    maxCount=max(maxCount, count);
    return make_pair(maxNum, maxCount);
}

int main() 
{
    vector<int> v;
    pair<int, int> p;
    int n, num;
    cin>>n;
    while(n--)
    {
        cin>>num;
        v.push_back(num);
    }
    p=maxVectorFreqeuncy(vectorFrequency(v));
    cout<<"Maximum Frequency Character : "<<p.first<<"-"<<p.second<<endl;
    p=countFrequency(v);
    cout<<p.first<<"-"<<p.second;
    cout<<endl;
    return 0;
}