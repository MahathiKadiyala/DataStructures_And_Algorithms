#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[]={10,20,30,40,50,60};
	vector<vector<int>>q={{2,4,1},{1,5,7},{5,5,10},{2,5,8},{0,3,12}};
	int sum=0;
	for(auto x:q){
		int l=x[0];
		int r=x[1];
		int v=x[2];
		for(int i=l;i<=r;i++){
			arr[i]+=v;
		}
	}
	for(int i=0;i<6;i++) sum+=arr[i];
	cout << sum << endl;
}