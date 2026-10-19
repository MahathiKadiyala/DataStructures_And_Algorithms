#include<bits/stdc++.h>
using namespace std;
int main(){
	stack<int>s;
	s.push(10);
	cout << s.top() << endl;
	s.push(20);
	cout << s.top() << endl;
	s.pop();
	s.pop();
	if(s.empty()) cout << "stack is empty" << endl;
	else cout << "Stack is not empty" << endl;
}