#include<iostream>
#include<set>

using namespace std;

int main(){

    set<int> st;
    cout << "Is set empty? " << st.empty() << endl;

    st.insert(10); // O(logN)
    st.insert(5);
    st.insert(5);
    st.insert(2);
    st.insert(10);
    st.insert(11);
    st.insert(2);

    cout << "Is set empty? " << st.empty() << endl;


    cout << "Traversing the set" << endl;
    for(auto temp: st){
        cout << temp << endl;
    }

    return 0;
}
