#include<iostream>
#include<cstdio> // For accessing C library
#include<vector>

using namespace std;

int main() {

    vector<int> vec;
    vec.push_back(10);
    vec.push_back(15);

    int n = vec.size(); // finding size of a vector
    int last = vec[n-1]; // retrive last element

    cout << "Last element is: " << last << endl;
    cout << "Size of out vector is: " << n << endl;

    vec.push_back(12);
    vec.push_back(17);
    vec.push_back(20);
    vec.push_back(5);
    n = vec.size();

    for(int i=n-1; i>=0; i--) {
        //cout << vec[i] << " ";
        printf("%d ", vec[i]);
    }

    cout << endl;
    cout << "Welcome to for each loop" << endl;
    for(int temp: vec){
        printf("%d ", temp);
    }

    return 0;
}
