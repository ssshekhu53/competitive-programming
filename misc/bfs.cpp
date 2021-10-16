#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


/*
 * Complete the 'distanceTraversed' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY lot as parameter.
 */
 
 vector<pair<int, int>> dir={{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

int distanceTraversed(vector<vector<int>> lot) {
    int row, col;
    queue<pair<pair<int, int>, int>> q;
    q.push({{0, 0}, 0});
    row=lot.size();
    col=lot[0].size();
    int minDistance=-1;
    while(!q.empty()) {
        int x=q.front().first.first;
        int y=q.front().first.second;
        
        int dis=q.front().second;
        
        q.pop();
        if(lot[x][y]==9) {
            minDistance=dis;
            break;
        }
        
        lot[x][y]=-1;
        
        for(auto itr=dir.begin(); itr!=dir.end(); itr++) {
            int xCoordinate=x+itr->first;
            int yCoordinate=y+itr->second;
            
            if(xCoordinate<0 || xCoordinate>=row || yCoordinate<0 || yCoordinate>=col || lot[xCoordinate][yCoordinate]==0 || lot[xCoordinate][yCoordinate]==-1)
                continue;
            q.push({{xCoordinate, yCoordinate}, dis+1});
        }
    }
    return minDistance;
}
int main()