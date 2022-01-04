#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

/*struct students{
    int id;
    string name;
}st[100];

for(students temp :st){

}*/

/*bool cmp(pair<char, int>& a, pair<char, int>& b){
    return a.second < b.second;
}*/

int main(){

    map<char, int> mp;
    mp['z'] = 100; // O(logn)
    mp['a'] = 200;
    mp['m'] = 50;
    mp['c'] = 70;

    //cout << mp['a'] << endl;

    /*for(pair<char, int> pr: mp){
        cout << pr.first << " -> " << pr.second << endl;
    }*/

    for(auto pr: mp){
        cout << pr.first << " -> " << pr.second << endl;
    }

    cout << endl << endl;
    cout << "Pair of vector" << endl;

    vector<pair<int, int>> vec;
    vec.push_back(make_pair(1,100));
    vec.push_back(make_pair(2,150));
    vec.push_back(make_pair(3,70));
    vec.push_back(make_pair(4,60));
    vec.push_back(make_pair(5,90));

    /*for(pair<int, int> pr: vec){
        cout << pr.first << " -> " << pr.second << endl;
    }*/

    for(auto pr: vec){
        cout << pr.first << " -> " << pr.second << endl;
    }

    return 0;
}
