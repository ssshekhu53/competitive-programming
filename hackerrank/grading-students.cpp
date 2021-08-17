// Grading Students
// https://www.hackerrank.com/challenges/grading/problem

#include<bits/stdc++.h>

using namespace std;

vector<int> gradingStudents(vector<int> grades) {
    for(auto itr=grades.begin(); itr!=grades.end(); itr++) {
        *itr=*itr>=38?(((*itr/5)+1)*5)-*itr<3?(((*itr/5)+1)*5):*itr:*itr;
    }
    return grades;
}

int main() 
{
    vector<int> grades;
    int i, n, grade;
    cin>>n;
    for(i=0; i<n; i++) {
        cin>>grade;
        grades.push_back(grade);
    }
    grades=gradingStudents(grades);
    for(auto itr=grades.begin(); itr!=grades.end(); itr++)
        cout<<*itr<<" ";
    cout<<endl;
    return 0;
}