#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


/*vector<int> takeInput(){
    int n;
    cin >> n;
    vector<int> ret;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        ret.push_back(temp);
    }
    return ret;
}*/

int findMedian(vector<int> vec){
    sort(vec.begin(), vec.end());  // O(nlogn)
    return vec[vec.size()/2];  // O(1)
}

vector<int> takeInput(){
    int n;
    cin >> n;
    vector<int> ret(n);
    for(int i=0;i<n;i++){  // O(n)
        cin >> ret[i];
    }
    return ret;
}

int main(){

    vector<int> vec;
    vec = takeInput();

    int res = findMedian(vec);
    cout << res << endl;

    return 0;
}

// Program execution complexity: O(nlogn)
