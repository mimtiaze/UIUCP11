#include<bits/stdc++.h>

#define yes cout << "YES" << endl
#define no cout << "NO" << endl

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--) {
        string str;
        cin >> str;

        bool r,b,g,found;
        r=b=g=false;
        found=true;

        for(char ch : str){
            /*if(ch>='a' && ch<='z') {
                if(ch=='r') r=1;
                else if(ch=='g') g=1;
                else if(ch=='b') b=1;
            } else {
                if((ch=='R' && r==1) || (ch=='B' && b==1) || (ch=='G' && g==1)){
                    continue;
                } else {
                    found = 0;
                    break;
                }
            }*/

            switch(ch) {
                case 'r':
                    r=1;
                    break;
                case 'b':
                    b=1;
                    break;
                case 'g':
                    g=1;
                    break;
                case 'R':
                    if(!r)
                        found = false;
                    break;
                case 'B':
                    if(!b)
                        found = false;
                    break;
                case 'G':
                    if(!g)
                        found = false;
                    break;
            }

            if(!found) break;
        }

        found? yes:no;
        /*
        if(found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        */

    }

    return 0;
}
