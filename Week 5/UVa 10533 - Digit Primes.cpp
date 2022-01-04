#include <bits/stdc++.h>
#define N 1000000+10

#define inFile freopen("input.txt", "r", stdin);
#define sync ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

vector<bool> prime (N, true);
vector<int> primeSum (N, 0);

int digitSum(int n){
    int sum = 0;
    while(n){
        int temp = n%10;
        sum = sum+temp;
        n = n/10;
    }
    return sum;

    /* If you interested in recursion...
    if(n==0) return n;
    return (n%10) + digitSum(n/10);
    */
}

void sieve(int n) {
    prime[0] = false;
    prime[1] = false;

    for(int i=2;i<=N;i++){
        primeSum[i] = primeSum[i-1];
        if(prime[i]){
            int digitSumNumber = digitSum(i);
            if(prime[digitSumNumber])
                primeSum[i]++;

            for(int j=i+i;j<=N;j+=i){
                prime[j] = false;
            }
        }
    }
}

int main(){
    sync;
    inFile;

    sieve(N);


    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        cout << primeSum[b] - primeSum[a-1] << endl;
    }

    return 0;
}
