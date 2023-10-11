#include <iostream>
#include <stack>
#define ll long long
using namespace std;

int ra(char a) {
	if(a=='^') return 3;
	if(a=='/' || a=='*') return 2;
	if(a=='+' || a=='-') return 1;
	return 0;
}

int main() {
	int a;
	cin>>a;
	while(a--) {
		string s;
		cin>>s;
		string res="";
		stack<char> st;
		for(char x : s) {
			if(isalpha(x)) res+=x;
			else {
				if(x=='(') st.push(x);
				else if(x==')') {
					while(st.top()!='(') {
						res+=st.top();
						st.pop();
					}
					st.pop();
				} else {
					while(st.size() && ra(st.top())>=ra(x)) {
						res+=st.top();
						st.pop();
					}
					st.push(x);
				}
			}
		}
		while(st.size()) {
			res+=st.top();
			st.pop();
		}
		cout<<res<<'\n';
	}
}