#include<bits/stdc++.h>

using namespace std;

bool PalindromeTwo(string str) {
    string str2="";
    int i, n;
    for(char ch: str) {
        if(isalpha(ch))
            str2+=toupper(ch);
        else if(isdigit(ch))
            str2+=ch;
    }
    i=0;
    n=str2.length();
    while(i<n/2) {
        if(str2[i]!=str2[n-(i+1)])
            return false;
        i++;
    }
    return true;
}

int main() {
    string str;
    getline(cin, str);
    cout<<(PalindromeTwo(str)?"true":"false")<<endl;
    return 0;
}