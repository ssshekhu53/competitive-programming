// Frequency of character

#include<bits/stdc++.h>

using namespace std;

map<char, int> charFrequency(string str) {
    map<char, int> m;
    for(char ch: str)
        if(m.find(ch)!=m.end())
            m[ch]++;
        else
            m[ch]=1;

    // for(auto itr=m.begin(); itr!=m.end(); itr++)
    //     cout<<itr->first<<"-"<<itr->second<<endl;
    return m;
}

pair<char, int> maxCharFreqeuncy(map<char, int> m) {
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

int main() 
{
    string str;
    pair<char, int> p;
    cin>>str;
    p=maxCharFreqeuncy(charFrequency(str));
    cout<<"Maximum Frequency Character : "<<p.first<<"-"<<p.second;
    cout<<endl;
    return 0;
}