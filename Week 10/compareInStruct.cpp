#include<bits/stdc++.h>

using namespace std;

struct Class{
    int classs;
    int stCount;
    int benchCount;
};

bool comp(Class a,Class b){
    return a.stCount<b.stCount;
}

bool compBench(Class a,Class b){
    return a.benchCount<b.benchCount;
}

bool compstudentCount(Class a,Class b){
    return a.stCount<b.stCount;
}

int main(){

    vector<Class> school;
    struct Class temp;

    for(int i=1;i<=10;i++){
        temp.classs = i;
        temp.stCount = rand() % 10 + 1;
        temp.benchCount = rand() % 20 + 40;
        //temp.height = (rand() % 20 + 40) / 10.0;
        school.push_back(temp);
    }

    for(Class st: school){
        cout << "Class: " << st.classs <<
        " Student: " << st.stCount <<
        " Bench: " << st.benchCount << endl;
    }

    sort(school.begin(), school.end(),comp);

    cout << "----After sort----" << endl;
    for(Class st: school){
        cout << "Class: " << st.classs <<
        " Student: " << st.stCount <<
        " Bench: " << st.benchCount << endl;
    }
    return 0;
}

