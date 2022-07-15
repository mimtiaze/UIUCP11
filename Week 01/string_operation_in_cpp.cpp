#include<iostream>
#include<string> // This is for C++
#include<cstring> // this is for C

using namespace std;

int main() {

    string str1 = "Hello everyone";
    string str2 = "Ki khobor tomader?";
    cout << str1 << ", " << str2 << endl;
    // OUTPUT: Hello everyone, Ki khobor tomader?


    string str3 = str1 + str2;
    cout << str3 << endl;
    // OUTPUT: Hello everyoneKi khobor tomader?


    string str11 = "tumi";
    string str12 = "ami";
    string str13 = "tumi";
    if(str11==str12)
        cout << "Tumi ami ek" << endl;
    else if(str11==str13)
        cout << "Tumi ami alada" << endl;
    else
        cout << "Leave me alone!" << endl;
    // OUTPUT: Tumi ami alada

    return 0;
}
