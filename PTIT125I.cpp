#include <bits/stdc++.h>
using namespace std;

int check[500005];

int main() {
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	string tmp = s;
	stack<char> st;
	for(char x : s) {
		while(k>0 && st.size() && x>st.top()) {
			k--;
			st.pop();
		}
		st.push(x);
	}
	while(k) {
		st.pop();
		k--;
	}
	string res="";
	while(st.size()) {
		res+=st.top();
		st.pop();
	}
	reverse(res.begin(), res.end());
	cout<<res;
}