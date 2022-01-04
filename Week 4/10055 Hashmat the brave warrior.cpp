#include<iostream>
#include<cmath>

using namespace std;

int main(){

    int a, b;

    //while((scanf("%d %d", &a, &b))!=EOF){
    while(cin >> a >> b){
        cout << abs(a-b) << endl;
    }

    return 0;
}

