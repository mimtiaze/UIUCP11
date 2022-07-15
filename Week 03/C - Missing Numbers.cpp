#include<iostream>
#include<algorithm>
#include<vector>

#define MAXLIMIT 10000+10 // 10^4

using namespace std;


vector<int> missingNumbers(vector<int> vec1, vector<int> vec2){
    vector<int> count1 (MAXLIMIT, 0); // O(n)
    vector<int> count2 (MAXLIMIT, 0); // O(n)

    for(int i=0;i<vec1.size();i++){ // O(n)
         int index = vec1[i];  // {7,2,5,4,6,3,5,3}
         count1[index]++;
    }

    for(int i=0;i<vec2.size();i++){ // O(n)
         count2[vec2[i]]++;
    }

    vector<int> ret;
    for(int i=0;i<MAXLIMIT;i++){ // O(10^4) = O(n)
         if(count2[i]>count1[i])
            ret.push_back(i);
    }
    return ret;
}

vector<int> takeInput(){
    int n;
    cin >> n;
    vector<int> ret(n);
    for(int i=0;i<n;i++){
        cin >> ret[i];
    }
    return ret;
}

int main(){

    vector<int> vec1, vec2, res;
    vec1 = takeInput(); // O(n)
    vec2 = takeInput(); // O(n)

    res = missingNumbers(vec1, vec2); // O(n)

    for(int i=0;i<res.size();i++){ // O(n)
        cout << res[i] << " ";
    }

    return 0;
}

// O(n)









