#include <bits/stdc++.h>
using namespace std;

int main() {
	int a;
	cin>>a;
	cin.ignore();
	while(a--) {
		string s;
		getline(cin, s);
		string tmp="";
		for(char x : s ) {
			if(x!=' ') tmp+=x;
		}
		int i=1;
		string res="";
		for(int j=0; j<s.size(); j++) {
			if(s[j]==' ') res+=' ';
			else res+=tmp[i++];
		}
		res.pop_back();
		char temp = tolower(s[0]);
		res=res+temp+"ee";
		res[0]=toupper(res[0]);
		cout<<res<<'\n';
	}
}