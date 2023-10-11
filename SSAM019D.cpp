#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n;

ll process() {
	queue<ll> q;
	q.push(9);
	while(q.front()%n) {
		ll tmp=q.front();
		q.push(tmp*10);
		q.push(tmp*10+9);
		q.pop();
	}
	return q.front();
}

int main() {
	int a;
	cin>>a;
	while(a--) {
		cin>>n;
		cout<<process()<<'\n';
	}
}