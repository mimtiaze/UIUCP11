
#include <bits/stdc++.h>

// #ifndef ONLINE_JUDGE
// #include "../Debugging Tools/dbg.cpp"
// #include "../Debugging Tools/MemView.cpp"
// #endif

using namespace std;

int main()
{
    //freopen("output.txt","w",stdout);
    double a, b, c;
    double area;
    while (cin >> a >> b >> c) {
        double s = (a+b+c)/2.0;
        double temp = s*(s-a)*(s-b)*(s-c);
        if(temp<0) {
            printf("-1.000\n");
            continue;
        }
        area = (double)(sqrt(temp));
        area = area * (4/3.0);
        if(area==0)
            area = -1;
        printf("%.3lf\n", area);
    }
    return 0;
}
