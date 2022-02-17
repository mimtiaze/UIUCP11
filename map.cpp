#include<bits\stdc++.h>

using namespace std;

int main(){

    map<int, int> mp;
    set<int> st;

    mp[0] = 1;
    mp[1] = 2;
    mp[2] = 3;

    st.insert(10);
    st.insert(1);
    st.insert(5);
    st.insert(3);

    for(auto t: mp){
        cout << "index: " << t.first << " value: " << t.second << endl;
    }

    for(auto t: st){
        cout << t << endl;
    }

    return 0;
}
