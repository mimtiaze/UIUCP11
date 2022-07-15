#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    vector<int> v = {1,2,3,4,5};

    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl << endl;

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();j++){
            cout << v[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
