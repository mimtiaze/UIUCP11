#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i,num,n,r,time,j;
    cin>>time;
    while (time--)
    {
        vector<int>v(10,0);
        cin>>num;

        for(int i=1; i<=num; i++)
        {
            n=i;
            while(n!=0)
            {
                r=n%10;
                v[r]+=1;
                n=n/10;
            }
        }

        for(i=0; i<9; i++)
        {
            cout<<v[i]<<" ";
        }
        cout << v[9] << endl;
    }
}