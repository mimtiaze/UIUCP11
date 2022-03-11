#include<bits/stdc++.h>
#define MAX 30

using namespace std;
int counter;
vector<int> dp(MAX, -1);


int fibo(int num){
    counter++;
    if(num==1 || num==2) return 1;
    return fibo(num-1) + fibo(num-2);
}

int fiboWithDP(int num){
    counter++;
    if(dp[num]!=-1) return dp[num];
    return dp[num] = fiboWithDP(num-1) + fiboWithDP(num-2);
}

int main(){

    counter = 0;
    cout << fibo(8) << endl;
    cout << fibo(5) << endl;
    cout << fibo(10) << endl;
    cout << fibo(4) << endl;
    cout << fibo(1) << endl;
    cout << fibo(2) << endl;
    cout << fibo(7) << endl;
    cout << fibo(15) << endl;
    cout << "Counter now: " << counter << endl;

    cout << "------ DP ------" << endl;
    counter = 0;
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    cout << fiboWithDP(8) << endl;
    cout << fiboWithDP(5) << endl;
    cout << fiboWithDP(10) << endl;
    cout << fiboWithDP(4) << endl;
    cout << fiboWithDP(1) << endl;
    cout << fiboWithDP(2) << endl;
    cout << fiboWithDP(7) << endl;
    cout << fiboWithDP(15) << endl;
    cout << "Counter now: " << counter << endl;

    return 0;
}
