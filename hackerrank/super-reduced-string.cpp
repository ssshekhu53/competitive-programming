// Super Reduced String
// https://www.hackerrank.com/challenges/reduced-string/problem

#include<bits/stdc++.h>

using namespace std;

string superReducedString(string s) {
    bool flag=true;
    string str="";
    int i;
    for(i=0; i<s.length(); i++)
    {
        if(i!=0 && s[i]==str.back())
        {
            flag=true;
            str.pop_back();
            continue;
        }
        str+=s[i];
    }
    s=str;
    s=s.length()==0?"Empty String":s;
    return s;
}

int main() 
{
    string str;
    cin>>str;
    cout<<superReducedString(str);
    cout<<endl;
    return 0;
}