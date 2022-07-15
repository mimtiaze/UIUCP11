#include<bits/stdc++.h>

#define inFile freopen("input.txt", "r", stdin);
#define sync ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    sync;
    inFile;

    int t;
    cin >> t;
    stack<long long> stk;
    stack<long long> stkTemp;
    vector<long long> vec;

    while(t--){
        int query;
        long long temp;
        cin >> query;

        switch(query){
        case 1:
            cin >> temp;
            //stk.push(temp);
            vec.push_back(temp);
            break;
        case 2:
            //stk.pop();
            vec.pop_back();
            break;
        case 3:
            long long maxx = *max_element(vec.begin(), vec.end());
            cout << maxx << endl;
            break;
        }

    }

    return 0;
}
