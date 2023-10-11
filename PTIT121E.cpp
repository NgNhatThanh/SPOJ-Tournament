#include <bits/stdc++.h>
using namespace std;

// su dung ki phap Balan bien doi bieu thuc ve bieu thuc trung to -> hau to -> tinh toan
int uutien(char n) {
	if(n=='+') return 1;
	if(n=='*') return 2;
	return 0;
}

int giatri(char n) {
	if(n=='O') return 16;
	if(n=='C') return 12;
	if(n=='H') return 1;
	return n-48;
}

int cal(int a, int b, char n) {
	if(n=='*') return a*b;
	return a+b;
}

void solve(string s) {
	string tmp;
	for(int i=0; i<s.size(); i++) {
		if(isalpha(s[i])) {
			if(s[i-1]!='(' && i>0) tmp+='+';
			tmp+=s[i];
		} else if(s[i]=='(') {
			if(s[i-1]!='(' && i>0) tmp+='+';
			tmp+=s[i];
		} else if(isdigit(s[i])) {
			tmp+='*';
			tmp+=s[i];
		} else if(s[i]==')') tmp+=s[i];
	}
	string hauto;
	stack<char> st;
	for(char x : tmp) {
		if(isalpha(x) || isdigit(x)) hauto+=x;
		else if(x=='(') st.push(x);
		else if(x==')') {
			while(!st.empty() && st.top()!='(') {
				hauto+=st.top();
				st.pop();
			}
			st.pop();
		} else {
			while(!st.empty() && uutien(x)<=uutien(st.top())) {
				hauto+=st.top();
				st.pop();
			}
			st.push(x);
		}
	}
	while(!st.empty()) {
		hauto+=st.top();
		st.pop();
	}
	stack<int> kq;
	for(char x : hauto) {
		if(isdigit(x) || isalpha(x)) {
			kq.push(giatri(x));
		} else {
			int t1=kq.top();
			kq.pop();
			int t2=kq.top();
			kq.pop();
			kq.push(cal(t1,t2,x));
		}
	}
	cout<<kq.top();
}

int main() {
	string s;
	cin>>s;
	solve(s);
}