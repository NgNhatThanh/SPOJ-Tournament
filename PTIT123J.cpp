#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	string s;
	while(getline(cin, s)){
		if(s==".") return 0;
		stack<char> st;
		int ok=1;
		for(int i=0;i<s.size();i++){
			if(s[i]=='(' || s[i]=='[') st.push(s[i]);
			else if(s[i]==')' || s[i]==']'){
				if(st.empty() || (s[i]==']' && st.top()!='[') || (s[i]==')' && st.top()!='(')){
					st.push(s[i]);
					break;
				}
				else st.pop();
			}
		}
		if(st.empty()==1) cout<<"yes\n";
		else cout<<"no\n";
	}
}