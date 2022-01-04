#include <bits/stdc++.h>

using namespace std;

int main(){

    cout << "Welcome to queue" << endl;

    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    while(!q.empty()){
        cout << "Now on front: " << q.front() << endl;
        cout << "Now on back: " << q.back() << endl;
        cout << endl;
        q.pop();
    }


    return 0;
}

