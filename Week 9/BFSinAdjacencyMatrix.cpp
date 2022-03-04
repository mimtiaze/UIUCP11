#include<bits/stdc++.h>
#define MAX_SIZE_X 10
#define MAX_SIZE_Y 10

using namespace std;
vector<vector<int>> arr = {{1,1,4,5,6}, {1,1,9,1,8}, {3,2,1,5,7}, {6,5,10,2,2}, {1,2,3,4,5}};
vector<vector<int>> visited(MAX_SIZE_X,vector<int>(MAX_SIZE_Y, 0));
int startX, startY;
int endX, endY;
int nX, nY;
int totalCost;
int counter = 0;
int countEnd = 0;

void solve(int x, int y, int cost){
    counter++;
    //cout << x << " " << y << " " << cost << endl;
    if(x==endX && y==endY) {
        cost-=arr[startX][startY];
        if(cost<totalCost)
            totalCost=cost;
        cout << "Reached: " << countEnd++ << " --> " << x << " " << y << " " << cost << endl;
        return;
    }

    visited[x][y] = 1;

    if((x+1)<nX && visited[x+1][y]==0) {
        solve(x+1,y,cost+arr[x][y]);
        visited[x][y] = 0;
    }

    if((y+1)<nY && visited[x][y+1]==0){
        solve(x,y+1,cost+arr[x][y]);
        visited[x][y] = 0;
    }
}

int main(){

    //int arr[4][4];
    /*for(vector<int> v: visited){
        for(int temp: v){
            cout << temp << " ";
        }
        cout << endl;
    }*/

    startX = 0;
    startY = 0;
    endX = 3;
    endY = 4;
    nX = 5;
    nY = 5;

    totalCost = INT_MAX;
    solve(0,0,0);
    cout << totalCost << endl;
    cout << "Counter: " << counter << endl;

    return 0;
}
