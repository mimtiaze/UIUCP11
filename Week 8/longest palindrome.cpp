#include<bits/stdc++.h>

using namespace std;

bool isPalindrome(string str){
    for(int i=0,j=str.length()-1; j>i; i++,j--){
        if(str[i]!=str[j])
            return false;
    }

    return true;
}

int main(){

    int t;
    cin >> t;

    while(t--) {
        string str;
        cin >> str;
        int n = str.length();

        if(n<=1) {
            cout << str.length() << endl;
            continue;
        }

        int maxPalinSize = 1;
        bool breakneed = false;
        for(int strSize = n; strSize>=2; strSize--){
            //cout << "Size now: " << strSize << endl;

            for(int i=0;i+strSize<=n;i++) {
                //int sizeee = i+strSize;
                string temp = str.substr(i, strSize);
                //cout << "String now: " << temp << endl;
                //cout << "i: " << i <<  " size: " << sizeee << endl;

                if(isPalindrome(temp)) {
                    cout << strSize << endl;
                    breakneed = true;
                    continue;
                }
            }

            if(breakneed) break;
        }

        if(!breakneed)
            cout << maxPalinSize << endl;
    }


    return 0;
}
