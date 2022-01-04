#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){

    string str = "aabbcd";
    int n = str.length();
    int counterLength = 26;

    vector<int> counter(counterLength, 0); // O(n)
    // a=0 z=25
    // a=97 A=65 ' '=32 0 = 48
    // str[i] - 'a' = 0
    // 0 + 'a' = 'a'

    for(int i=0;i<n;i++){ // O(n)
        counter[str[i]-'a']++;
    }

    for(int i=0;i<counterLength;i++){  // O()
        if(counter[i]>0){
            char ch = i+'a';
            cout << ch << " occurs: " << counter[i] << " times" << endl;
        }
    }

    return 0;
}

// O(n)
