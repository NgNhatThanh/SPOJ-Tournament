#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	string s;
	cin>>s;
	int res=0;
	stack<char> v;
	string tmp;
	for(char x : s){
		if(x=='(') tmp.push_back(x);
		else{
			if(!tmp.empty() && tmp.back()=='(') tmp.pop_back();
			else tmp.push_back(x);
		}
	}
	s=tmp;
	for(char x : s){
		if(x=='('){
			if(!v.empty()){
				if(v.top()==')'){
					res+=2;
					v.pop();
				}
				else {
					res++;
					v.pop();
				}
			}
			else v.push(x);
		}
		else{
			if(!v.empty()){
				if(v.top()=='(') v.pop();
				else{
					res++;
					v.pop();
				}
			}
			else{
				res++;
				v.push('(');
			}
		}
	}
	cout<<res;
}
