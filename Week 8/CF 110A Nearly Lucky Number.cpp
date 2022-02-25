#include<iostream>

using namespace std;

int main() {
    long long int num;
    cin >> num;

    int fourCounter = 0, sevenCounter = 0;

    while(num) {
        int rem = num % 10;
        if(rem==4) fourCounter++;
        else if(rem==7) sevenCounter++;

        num = num / 10;
    }

    if((fourCounter+sevenCounter)==4 || (fourCounter+sevenCounter)==7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
