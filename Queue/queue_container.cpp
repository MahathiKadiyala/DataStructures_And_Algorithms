#include<bits/stdc++.h>
using namespace std;
int main(){
	queue<int>q;
	q.push(10);
	cout << q.front() << endl;
	q.push(20);
	cout << q.front() << endl;
	q.push(30);
	q.pop();
	q.pop();
	cout << q.front() << endl;
	if(q.empty()) cout << "queue is empty" << endl;
	else cout << "queue is not empty" << endl;
}