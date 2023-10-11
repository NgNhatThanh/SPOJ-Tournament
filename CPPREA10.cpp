#include <bits/stdc++.h>
using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--) {
		string s;
		cin>>s;
		stack<int> st;
		int k=1;
		for(char x : s) {
			st.push(k);
			k++;
			if(x=='I') {
				while(st.size()) {
					cout<<st.top();
					st.pop();
				}
			}
		}
		cout<<k;
		while(st.size()) {
			cout<<st.top();
			st.pop();
		}
		cout<<'\n';
	}
}