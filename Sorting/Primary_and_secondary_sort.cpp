#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<pair<int,int>> students = {
        {101,90},
        {103,85},
        {102,90},
        {104,95}

    };

    sort(students.begin(), students.end(),
    [](pair<int,int> a, pair<int,int> b){

        if(a.second==b.second)
            return a.first<b.first;

        return a.second>b.second;
    });

    for(auto s : students)
        cout << "Roll: " << s.first
             << " Marks: " << s.second << endl;
}