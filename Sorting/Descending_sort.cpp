#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {7, 2, 9, 1, 5};
    sort(v.begin(), v.end(), [](int a, int b) {
        return a > b;
    });

    for (int x : v)
        cout << x << " ";
}