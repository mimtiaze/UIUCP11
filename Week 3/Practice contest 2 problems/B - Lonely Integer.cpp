#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


// Solution 2 = O(n)
int lonelyInteger(vector<int> vec){
    int n = vec.size();
    int num = 0;

    for(int i=0;i<n;i++){ // O(n)
        num = num^vec[i];
    }

    return num;
}

// Solution 1 = O(n/2 + nlogn) = O(nlogn)
/*int lonelyInteger(vector<int> vec){
    sort(vec.begin(), vec.end()); // O(nlogn)
    int n = vec.size();

    for(int i=1;i<n;i+=2){  // O(n/2) = O(n)
        if(vec[i]!=vec[i-1])
            return vec[i-1];
    }

    return vec[n-1];
}*/

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

    cout << lonelyInteger(vec) << endl;

    return 0;
}
