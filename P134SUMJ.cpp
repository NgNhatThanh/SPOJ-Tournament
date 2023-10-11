#include <bits/stdc++.h>
#define ll long long
using namespace std;

string mau[8];

void ktao() {
	mau[0]="abc";
	mau[1]="def";
	mau[2]="ghi";
	mau[3]="jkl";
	mau[4]="mno";
	mau[5]="pqrs";
	mau[6]="tuv";
	mau[7]="wxyz";
}

void decode(char &n, int m) {
	char tmp = n;
	if(tmp<97) tmp+=32;
	for(int i=0; i<8; i++) {
		for(int j=0; j<mau[i].size(); j++) {
			if(mau[i][j]==tmp) {
				int k=j;
				while(m--) {
					k--;
					if(k<0) k=mau[i].size()-1;
				}
				tmp = mau[i][k];
				if(n<'a') n=toupper(tmp);
				else n=tmp;
				return;
			}
		}
	}
}

int main() {
	ktao();
	string s;
	while(cin>>s) {
		if(s=="#") return 0;
		for(int i=0; i<s.size(); i++) {
			decode(s[i], i+1);
		}
		cout<<s<<'\n';
	}
}