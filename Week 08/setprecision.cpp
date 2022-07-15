#include<bits/stdc++.h>

using namespace std;
using namespace std::chrono;

int main(){
    auto start = high_resolution_clock::now();

    double t = 2.2500;
    cout << t << endl;

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken for cout: "
         << duration.count() << " microseconds" << endl;


    start = high_resolution_clock::now();
    printf("%0.01lf\n", t);

    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken for printf: "
         << duration.count() << " microseconds" << endl;

    return 0;
}
