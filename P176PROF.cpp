#include <bits/stdc++.h>
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
	faster()
	int a;
	cin>>a;
	while(a--) {
		string s;
		cin>>s;
		int cnt=0;
		int zombie=0;
		stack<char> st;
		for(int i=0; i<s.size(); i++) {
			if(s[i]=='(') st.push(s[i]);
			else if(s[i]==')') {
				st.pop();
			} 
			else if(isalpha(s[i])) {
				int tmp=i;
				while(isalpha(s[i])) {
					i++;
				}
				if(st.empty()) {
					zombie=max(zombie, i-tmp);
				} 
				else cnt++;
				i--;
			}
		}
		cout<<zombie<<' '<<cnt<<'\n';
	}
}