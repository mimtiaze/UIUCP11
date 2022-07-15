#include<bits/stdc++.h>

using namespace std;

int main() {

    priority_queue <int> pqueue;
    //priority_queue <int, vector<int>, greater<int>> pqueue;

    pqueue.push(10); // O(logn)
    pqueue.push(20);
    pqueue.push(15);
    pqueue.push(12);
    pqueue.push(6);

    while(!pqueue.empty()) {
        int t = pqueue.top(); // O(1)
        cout << t <<  " ";
        pqueue.pop(); // O(1)
    }

    return 0;
}
