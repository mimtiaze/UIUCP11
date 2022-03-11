#include<bits/stdc++.h>

using namespace std;
int s,e;

vector<int> findMaxSumWithIndexWithVector(vector<int> v){
    int tSum = 0;
    int maxx = INT_MIN;
    int tS = 0;
    int st,ed;

    for(int i=0;i<v.size();i++){
        tSum = tSum + v[i];

        if(tSum>maxx){
            maxx = tSum;
            st = tS;
            ed = i;
        }
        if(tSum<0){
            tSum = 0;
            tS = i+1;
        }
    }

    //vector<int> res = {maxx,s,e};
    vector<int> res;
    res.push_back(maxx);
    res.push_back(st);
    res.push_back(ed);
    return res;
}

int findMaxSumWithIndex(vector<int> v){
    int tSum = 0;
    int maxx = INT_MIN;
    int tS = 0;

    for(int i=0;i<v.size();i++){
        tSum = tSum + v[i];

        if(tSum>maxx){
            maxx = tSum;
            s = tS;
            e = i;
        }
        if(tSum<0){
            tSum = 0;
            tS = i+1;
        }
    }

    return maxx;
}

int findMaxSum(vector<int> v){
    int tSum = 0;
    int maxx = INT_MIN;

    for(int i=0;i<v.size();i++){
        tSum = tSum + v[i];

        if(tSum>maxx)
            maxx = tSum;
        if(tSum<0)
            tSum = 0;
    }

    return maxx;
}

int main(){

    vector<int> arr = {5,2,-6,2,-10,1,4,-1,-2,6,-8,5,2,-9};
    cout << findMaxSumWithIndex(arr) << endl;
    cout << "Where the segment is: " << s << " - " << e << endl;

    vector<int> ans = findMaxSumWithIndexWithVector(arr);
    cout << ans[0] << endl;
    cout << "Where the segment is: " << ans[1] << " - " << ans[2] << endl;

    return 0;
}
