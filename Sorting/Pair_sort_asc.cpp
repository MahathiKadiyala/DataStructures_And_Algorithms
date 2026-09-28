#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<pair<int,int>> v = {
        {4,10},
        {2,30},
        {7,20},
        {1,40}
    };

    sort(v.begin(), v.end(), [](pair<int,int> a, pair<int,int> b) {
        return a.first < b.first;
    });

    for(auto p : v)
        cout << "(" << p.first << "," << p.second << ") ";
}