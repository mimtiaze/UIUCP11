#include<bits/stdc++.h>

using namespace std;

bool comp(int a,int b){
    return a>b;
}

int main(){

    vector<int> v = {1,5,4,8,9,1,4,6,4,8,4,3,6,5,7,5};
    //sort(v.begin(),v.end(),greater<int>());
    sort(v.begin(),v.end(),comp);

    for(int t: v){
        cout << t << " ";
    }

    return 0;
}
