// Restrictive Candy Crush
// https://practice.geeksforgeeks.org/problems/8c8f95810b05b4cab665f2997d36991bd58308a2/1

#include<bits/stdc++.h>

using namespace std;

string Reduced_String(int k,string s){
    string str="";
    stack<pair<char, int>> stk;
    for(int i=0; i<s.length(); i++)
    {
        if(stk.empty() || stk.top().first!=s[i])
            stk.push(make_pair(s[i], 1));
        else if(stk.top().first==s[i])
        {
            if(stk.top().second==k) stk.pop(); 
            else stk.top().second+=1;

        }
        else
            stk.push(make_pair(s[i], 1));
    }
    while(!stk.empty())
    {
        if(stk.top().second!=k)
            while(stk.top().second--)
                str+=stk.top().first;
        stk.pop();   
    }
    reverse(str.begin(), str.end());
    return str;
}

int main() 
{
    int k;
    string str;
    cin>>k;
    cin>>str;
    cout<<Reduced_String(k, str);
    cout<<endl;
    return 0;
}