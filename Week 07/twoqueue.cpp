#include<bits/stdc++.h>

using namespace std;

int main() {

    priority_queue <int> higher;
    priority_queue <int, vector<int>, greater<int>> lower;

    higher.push(1);
    higher.push(2);
    higher.push(3);
    higher.push(4);

    lower.push(5);
    lower.push(6);
    lower.push(7);
    lower.push(8);

    while(!lower.empty()) {
        int t = lower.top();
        cout << t <<  " ";
        lower.pop();
    }
    cout << endl;

    while(!higher.empty()) {
        int t = higher.top();
        cout << t <<  " ";
        higher.pop();
    }
    cout << endl;

    return 0;
}
