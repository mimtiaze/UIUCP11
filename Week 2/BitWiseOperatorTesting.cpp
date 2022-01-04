#include<iostream>

using namespace std;

int main(){

    int a = 5;
    int res = a>>1;
    cout << res << endl;
    // OUTPUT: 2

    res = a<<1;
    cout << res << endl;
    // OUTPUT: 10

    res = ~a;
    cout << res << endl;
    // OUTPUT: -6 (Homework)


    return 0;
}
