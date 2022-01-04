#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    vector<int> v = {1,0,1,3,3,2,9,7,5,11};
    sort(v.begin(), v.begin()+6); // Sorting with a limit
    for(int t: v)
        cout << t << " ";
    cout << endl;

    sort(v.begin(), v.end()); // Ascending order sort
    for(int t: v)
        cout << t << " ";
    cout << endl;

    sort(v.begin(), v.end(), greater<int>()); //Descending order sort;
    for(int t: v)
        cout << t << " ";
    cout << endl;



    // taking input from console
    for(int i=0; i<20; i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }


    sort(v.begin(), v.end());
    for(int t: v)
        cout << t << " ";
    cout << endl;

    return 0;
}
