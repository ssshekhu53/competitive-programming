// Q. Dynamic Array
// https://www.hackerrank.com/challenges/dynamic-array/problem

#include<iostream>
#include<vector>

using namespace std;

vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    int lastAnswer=0;
    vector< vector<int> > arr;
    vector<int> answerArray;
    arr.resize(n);
    for(int i=0; i<queries.size(); i++) {
        if(queries[i][0]==1) {
            arr[(queries[i][1]^lastAnswer)%n].push_back(queries[i][2]);
        }
        else if(queries[i][0]==2) {
            lastAnswer=arr[(queries[i][1]^lastAnswer)%n][queries[i][2]%arr[(queries[i][1]^lastAnswer)%n].size()];
            answerArray.push_back(lastAnswer);
        }
    }
    return answerArray;
}

int main() {
    vector< vector<int> > arr;
    vector<int> arr2;
    unsigned int n, q, i, j, k;
    int num;

    cin>>n>>q;

    for(i=0; i<q; i++) {
        vector<int> temp;
        for(j=0; j<3; j++) {
            cin>>num;
            temp.push_back(num);
        }
        arr.push_back(temp);
    }

    arr2=dynamicArray(n, arr);

    for(i=0; i<arr2.size(); i++)
        cout<<arr2[i]<<" ";
    cout<<endl;

    return 0;
}