#include<bits/stdc++.h>

using namespace std;

int main() {

    priority_queue <int> higher;
    priority_queue <int, vector<int>, greater<int>> lower;

    while(true){
        int num;
        cin >> num;
        if(num == -1) break;

        lower.push(num);
        higher.push(lower.top());
        lower.pop();

        while(higher.size()>lower.size()) {
            lower.push(higher.top());
            higher.pop();
        }

        //Finding median
        int med = -1;
        if(lower.size()>higher.size()){
            med = lower.top();
        } else if(higher.size()==lower.size()) {
            med = (higher.top() + lower.top()) / 2;
        }

        (med==-1)? cout << "Something is wrong!!!" << endl : cout << med << endl;
        //cout << med << endl;
        //cout << "SIZE: " <<higher.size() << " " << lower.size() << endl;
        //cout << "TOP: " << higher.top() << " " << lower.top() << endl;

    }

    return 0;
}
