#include <bits/stdc++.h>
using namespace std;

long long sum=0;
long long l, r;

void solve() {
	queue<long long> q;
	q.push(4);
	q.push(7);
	while(l<=r) {
		if(q.front()==l) {
			sum+=l;
			l++;
		} 
		else if(q.front()>l) {
			long long tmp=min(q.front(), r);
			sum+=q.front()*(tmp-l+1);
			l=tmp+1;
		}
		q.push(q.front()*10+4);
		q.push(q.front()*10+7);
		q.pop();
		if(l==r && sum) break;
	}
}

int main() {
	cin>>l>>r;
	solve();
	cout<<sum;
}