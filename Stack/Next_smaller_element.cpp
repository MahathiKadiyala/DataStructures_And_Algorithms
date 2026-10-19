//Next smaller element
#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int>arr={73,74,75,71,69,72,76,73};
	stack<int>st;
	vector<int>ans(arr.size(),-1);
	for(int i=0;i<arr.size();i++){
		while(!st.empty() && arr[i]<arr[st.top()]){
			 ans[st.top()]=arr[i];
			 st.pop();
		}
		st.push(i);
	}
	for(int i=0;i<ans.size();i++) cout << ans[i] << " ";
}


//NUmber of indices btwn current and next smaller element
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	vector<int>arr={73,74,75,71,69,72,76,73};
//	stack<int>st;
//	vector<int>ans(arr.size(),-1);
//	for(int i=0;i<arr.size();i++){
//		while(!st.empty() && arr[i]<arr[st.top()]){
//			 ans[st.top()]=i-st.top();
//			 st.pop();
//		}
//		st.push(i);
//	}
//	for(int i=0;i<ans.size();i++) cout << ans[i] << " ";
//}