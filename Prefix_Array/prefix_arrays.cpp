//#include<bits\stdc++.h>
//using namespace std;
//int main(){
//	vector<int>a={10,20,30,40,50};
//	vector<int>p;
//	int s=0;
//	for(int i=0;i<5;i++){
//		s+=a[i];
//		p.push_back(s);
//	}
//	for(int x:p){
//		cout << x << " ";
//	}
//}

#include<bits\stdc++.h>
using namespace std;
int main(){
   vector<int>a={2,9,3,14,1};
   vector<int>ps,pp,px,pmin,pmax;
   int s=0,p=1,x=0,mini=INT_MAX,maxi=INT_MIN;
   for(int i=0;i<5;i++){
   	s+=a[i];
   	p*=a[i];
   	x^=a[i];
   	mini=min(mini,a[i]);
   	maxi=max(maxi,a[i]);
   	ps.push_back(s);
   	pp.push_back(p);
   	px.push_back(x);
   	pmin.push_back(mini);
   	pmax.push_back(maxi);
  }
  cout << "Prefix sum:" << " ";
  for(int x:ps){
  	cout << x << " ";
  }
  cout << endl;
  cout << "Prefix product:" << " ";
  for(int x:pp){
  	cout << x << " ";
  }
  cout << endl;
  cout << "Prefix XOR:" << " ";
  for(int x:px){
  	cout << x << " ";
  }
  cout << endl;
  cout << "Prefix Minimum:" << " ";
  for(int x:pmin){
  	cout << x << " ";
  }
  cout << endl;
  cout << "Prefix Maximum:" << " ";
  for(int x:pmax){
  	cout << x << " ";
  }
  cout << endl;
}