#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int prefixSum(vector<int> vec, int a, int b){
    vector<int> pSum (vec.size());
    pSum[0] = vec[0];
    for(int i=1;i<vec.size();i++){
        pSum[i] = pSum[i-1] + vec[i];
    }

    int ret;
    if(a>0)
        ret = pSum[b] - pSum[a-1];
    else
        ret = pSum[b];

    return ret;
}

int main(){

    vector<int> vec = {1,8,5,9,3,2,4,6};
    cout << prefixSum(vec, 3, 5) << endl;

    return 0;
}
