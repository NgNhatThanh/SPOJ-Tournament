#include <bits/stdc++.h>
#define ll long long
using namespace std;

int cap(char a) {
	if(a=='*' || a=='/') return 2;
	if(a=='+' || a=='-') return 1;
	return 0;
}

void cal(ll &a, ll b, char x ) {
	if(x=='+') a+=b;
	else if(x=='-') a-=b;
	else if(x=='*') a*=b;
	else a/=b;
}

int main() {
	int a;
	cin>>a;
	while(a--) {
		string s;
		cin>>s;
		int len=s.size();
		stack<char> st;
		string tmp="";
		for(int i=0; i<len; i++) {
			if(s[i]>='0' && s[i]<='9') {
				tmp+=s[i];
			} else {
				tmp+=' ';
				if(s[i]=='(') st.push(s[i]);
				else if(s[i]==')') {
					while(st.top()!='(') {
						tmp+=st.top();
						st.pop();
					}
					st.pop();
				} 
				else if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/') {
					while(!st.empty() && cap(st.top())>=cap(s[i])) {
						tmp+=st.top();
						st.pop();
					}
					st.push(s[i]);
				}
			}
		}
		while(!st.empty()) {
			tmp+=st.top();
			st.pop();
		}
		stack<ll> res;
		int len1=tmp.size();
		for(int i=0; i<tmp.size(); i++) {
			if(tmp[i]>='0' && tmp[i]<='9') {
				ll sum=0;
				while(tmp[i]>='0' && tmp[i]<='9') {
					sum=sum*10+tmp[i]-48;
					i++;
				}
				i--;
				res.push(sum);
			} 
			else if(tmp[i]==' ') continue;
			else if(tmp[i]=='+' || tmp[i]=='-' || tmp[i]=='*' || tmp[i]=='/') {
				ll t1=res.top();
				res.pop();
				ll t2=res.top();
				res.pop();
				cal(t2, t1, tmp[i]);
				res.push(t2);
			}
		}
		cout<<res.top()<<'\n';
	}

}