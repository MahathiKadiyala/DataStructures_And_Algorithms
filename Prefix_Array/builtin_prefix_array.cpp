#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {10,20,30,40,50};
    int n = arr.size();
    vector<int>prefix_sum(n);
    vector<int> prefixProduct(n);
    vector<int> prefixXor(n);
    vector<int> prefixMin(n);
    vector<int> prefixMax(n);
    partial_sum(arr.begin(),arr.end(),prefix_sum.begin());
    partial_sum(arr.begin(), arr.end(), prefixProduct.begin(), multiplies<int>());
    partial_sum(arr.begin(), arr.end(), prefixXor.begin(), bit_xor<int>());
    partial_sum(arr.begin(), arr.end(), prefixMin.begin(),[](int a, int b){ return min(a, b); });
    partial_sum(arr.begin(), arr.end(), prefixMax.begin(),[](int a, int b){ return max(a, b); });
//    cout << "Prefix_sum:";
//    for (int x : prefix_sum) cout << x << " ";
//    cout << "\nPrefix Product: ";
//    for (int x : prefixProduct) cout << x << " ";
//    cout << "\nPrefix XOR: ";
//    for (int x : prefixXor) cout << x << " ";
//    cout << "\nPrefix Min: ";
//    for (int x : prefixMin) cout << x << " ";
//    cout << "\nPrefix Max: ";
//    for (int x : prefixMax) cout << x << " ";
    vector<vector<int>>q={{1,3},{0,2},{0,3},{1,4},{1,1},{3,4}};
    for(int i=0;i<q.size();i++){
    	int l=q[i][0];
    	int r=q[i][1];
    	int s=0;
    	for(int i=l;i<=r;i++){
    		s+=arr[i];
		}
		cout << s << endl;
	}
}
