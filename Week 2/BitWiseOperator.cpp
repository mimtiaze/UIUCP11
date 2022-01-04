#include<iostream>

using namespace std;

void calculate_the_maximum(int n, int k) {
    int maxAnd = 0;
    int maxOr = 0;
    int maxXor = 0;

    for (int i=1; i<=n; i++) {
        for (int j=i+1; j<=n; j++) {
            int tempAnd = i&j;
            int tempOr = i|j;
            int tempXor = i^j;

            if (tempAnd > maxAnd && tempAnd < k)
                maxAnd = tempAnd;
            if (tempOr > maxOr && tempOr < k)
                maxOr = tempOr;
            if (tempXor > maxXor && tempXor < k)
                maxXor = tempXor;
        }
    }

    cout << maxAnd << endl;
    cout << maxOr << endl;
    cout << maxXor << endl;
}

int main() {
    int n, k;

    cin >> n >> k;
    calculate_the_maximum(n, k);

    return 0;
}
