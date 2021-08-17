// Q. Variable sized array
// https://www.hackerrank.com/challenges/variable-sized-arrays/problem

#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector< vector<unsigned int> > arr;
    unsigned int n, q, i, j, k, num;

    cin>>n>>q;

    for(i=0; i<n; i++) {
        vector<unsigned int> temp;
        cin>>k;
        for(j=0; j<k; j++) {
            cin>>num;
            temp.push_back(num);
        }
        arr.push_back(temp);
    }

    while(q--) {
        cin>>i>>j;
        cout<<arr[i][j]<<endl;
    }
    return 0;
}