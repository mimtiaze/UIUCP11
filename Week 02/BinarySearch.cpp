#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdlib>

using namespace std;

int bin_search(vector<int> v, int target){

    int high, lo, mid;
    high = v.size()-1;
    lo = 0;
    int loopCount = 1;

    while(lo<=high){
        mid = lo + (high - lo) / 2;
        cout << "Loop no: " << loopCount++ << endl;

        if(v[mid]==target)
            return mid;
        else if(v[mid]<target)
            lo = mid + 1;
        else if(v[mid]>target)
            high = mid - 1;
    }

    return -1;
}

int main(){

    vector<int> v = {1,0,1,3,3,2,9,7,5,11,14,20,15,16,12};
    for(int i = 0; i<1000 ; i++){
        int temp = rand() % 5 + 1000; // Generating random number from 1000 to 1004
        v.push_back(temp);
    }

    sort(v.begin(), v.end()); // Sort
    for(int t: v)
        cout << t << " ";
    cout << endl;

    int res = bin_search(v, 1005);
    if(res==-1){
        cout << "Target not found" << endl;
    } else {
        cout << "Target found in index: " << res << endl;
    }

    return 0;
}

