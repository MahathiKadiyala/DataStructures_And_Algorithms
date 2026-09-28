//Intervals (Start ↑, End ↓ if Start Equal)
#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<vector<int>> intervals = {
        {1,4},
        {2,8},
        {1,5},
        {3,6}
    };

    sort(intervals.begin(), intervals.end(),
    [](vector<int> a, vector<int> b){

        if(a[0]==b[0])
            return a[1]>b[1];

        return a[0]<b[0];
    });

    for(auto x : intervals)
        cout << "[" << x[0] << "," << x[1] << "] ";
}