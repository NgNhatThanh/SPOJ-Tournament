#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--) {
		int n;
		cin>>n;
		ll arr[n];
		ll res=0;
		for(ll &x : arr) cin>>x;
		stack<int> st;
		int i=0;
		for(; i<n; i++) {
			if(st.empty() || arr[i]>=arr[st.top()]) st.push(i);
			else {
				int tmp = st.top();
				st.pop();
				if(st.empty()) res=max(res, i*arr[tmp]);
				else {
					res = max(res, (i-st.top()-1)*arr[tmp]);
				}
				i--;
			}
		}
		while(st.size()) {
			int tmp = st.top();
			st.pop();
			if(st.empty()) res=max(res, i*arr[tmp]);
			else res=max(res, (i-st.top()-1)*arr[tmp]);
		}
		cout<<res<<'\n';
	}
}