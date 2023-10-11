#include <bits/stdc++.h>

using namespace std;

int main() {
	int a,b,c;
	cin>>a>>b>>c;
	char res='0';
	if(a==b/c) res='/';
	else if(a==b+c) res='+';
	else if(a==b-c) res='-';
	else if(a==b*c) res='*';
	if(res!='0') cout<<a<<"="<<b<<res<<c;
	else {
		if(a+b==c) res='+';
		else if(a-b==c) res='-';
		else if(a*b==c) res='*';
		else res='/';
		cout<<a<<res<<b<<"="<<c;
	}
}