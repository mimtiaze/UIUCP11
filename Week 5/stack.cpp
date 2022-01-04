#include <bits/stdc++.h>

using namespace std;

int main(){

    cout << "Welcome to stack" << endl;

    stack<int> stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);
    stk.push(50);

    while(!stk.empty()) {
        cout << "Now on top: " << stk.top() << endl;
        stk.pop();
    }

    return 0;
}
