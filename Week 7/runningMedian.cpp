#include<bits/stdc++.h>

using namespace std;

int main() {

    priority_queue <int> higher;
    priority_queue <int, vector<int>, greater<int>> lower;

    while(1){
        int num;
        cin >> num;
        if(num == -1) break;

        lower.push(num);
        higher.push(lower.top());
        lower.pop();

        while(higher.size()>lower.size()+1) {
            lower.push(higher.top());
            higher.pop();
        }
    }

    return 0;
}
