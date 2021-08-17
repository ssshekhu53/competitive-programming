// Counting vallies
// https://www.hackerrank.com/challenges/counting-valleys/problem

#include<bits/stdc++.h>

using namespace std;

int countingValleys(int steps, string path) {
    int i, level, prevLevel, len, valley;
    i=level=prevLevel=valley=0;
    len=path.length();
    // while(i<len) {
    //     path[i++]=='D'?level--:level++;
    //     if(prevLevel==0 && level<0) 
    //         valley++;
    //     prevLevel=level;
    // }

    while(i<len) {
        if(level==0 && path[i]=='D') {
            valley++;
            level--;
        }
        else if(path[i]=='U') {
            level++;
        }
        else if(path[i]=='D') {
            level--;
        }
        i++;
    }
    return valley;
}

int main() 
{
    int n, temp, i;
    string path;
    cin>>n;
    cin>>path;
    cout<<countingValleys(n, path)<<endl;
    return 0;
}