#include <iostream>
#include <stack>
#define ll long long
using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--) {
		string s;
		cin>>s;
		stack<int> st;
		st.push(-1);
		int res=0;
		for(int i=0; i<s.size(); i++) {
			if(s[i]=='(') st.push(i);
			else {
				if(st.size()>1) {
					st.pop();
					res=max(res, i-st.top());
				} else {
					st.pop();
					st.push(i);
				}
			}
		}
		cout<<res<<'\n';
	}
}