#include<bits/stdc++.h>
#define MAX 10

using namespace std;

int counter;
vector<int> dp (MAX, -1);

int factorial(int num){
    counter++;
    if(num==1) return 1;
    return num * factorial(num - 1);
}

int factorialWithDP(int num){
    counter++;
    if(dp[num]!=-1) return dp[num];
    return dp[num] = num * factorialWithDP(num - 1);
}


int main(){

    counter = 0;
    cout << factorial(9) << endl;
    cout << factorial(7) << endl;
    cout << factorial(3) << endl;
    cout << factorial(6) << endl;
    cout << factorial(2) << endl;
    cout << factorial(5) << endl;
    cout << factorial(8) << endl;
    cout << factorial(4) << endl;
    cout << factorial(6) << endl;
    cout << "Counter now: " << counter << endl;

    cout << "---- DP ----" << endl;
    counter = 0;
    dp[0] = 0;
    dp[1] = 1;
    cout << factorialWithDP(5) << endl;
    cout << factorialWithDP(9) << endl;
    cout << factorialWithDP(3) << endl;
    cout << factorialWithDP(6) << endl;
    cout << factorialWithDP(2) << endl;
    cout << factorialWithDP(7) << endl;
    cout << factorialWithDP(8) << endl;
    cout << factorialWithDP(4) << endl;
    cout << factorialWithDP(6) << endl;
    cout << "Counter now: " << counter << endl;

    return 0;
}

