#include<bits/stdc++.h>

using namespace std;
using namespace std::chrono;

int main(){
    vector<int> v;
    for(int i=0;i<1000;i++){
        v.push_back(i);
    }

    auto start = high_resolution_clock::now();

    reverse(v.begin(),v.end());

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken for stl rev: "
         << duration.count() << " microseconds" << endl;


    for(int temp: v){
        cout << temp << " ";
    }
    cout << endl;

    start = high_resolution_clock::now();

    int i,j;
    i=0;
    j=v.size()-1;
    while(i<=j) {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;

        i++;
        j--;
    }

    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken for two pointer: "
         << duration.count() << " microseconds" << endl;

    for(int temp: v){
        cout << temp << " ";
    }
    cout << endl;

    return 0;
}
