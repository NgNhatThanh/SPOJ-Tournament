#include <bits/stdc++.h>
#define ll long long
using namespace std;

void change(char &x) {
	if(x=='#') x='*';
	else x='#';
}

string s;

void dongdau(int dai) {
	char mau = '#';
	int cnt=0;
	int k=2;
	for(int i=0; i<dai; i++) {
		if((mau=='*' && cnt==1) || (mau=='#' && cnt==2)) {
			cnt=0;
			change(mau);
		}
		if(i==k) {
			k+=4;
			cnt++;
			cout<<mau;
		} else cout<<'.';
	}
}

void donghai(int dai) {
	char mau = '#';
	int cnt=0;
	for(int i=0; i<dai; i++) {
		if((cnt==4) || (cnt==2 && mau=='*')) {
			cnt=0;
			change(mau);
		}
		if(i%2) {
			cout<<mau;
			cnt++;
		} else cout<<'.';
	}
}

void donggiua(int dai) {
	char mau='#';
	int k1=4, k2=2;
	int idx=0;
	int cnt=0;
	int tmp = (dai-1)/4;
	for(int i=0; i<dai; i++) {
		if((cnt==2 && mau=='*') || (cnt==1 && mau=='#')) {
			cnt=0;
			change(mau);
		}
		if(i%2) cout<<'.';
		else if(i==0 || (i==dai-1 && mau=='*' && cnt==0)) cout<<"#";
		else {
			if(i==k1) {
				cout<<mau;
				cnt++;
				k1+=4;
			} else if(i==k2 && idx<s.size()) {
				k2+=4;
				cout<<s[idx];
				idx++;
			}
		}
	}
}

int main() {
	cin>>s;
	int dai = 4*s.size()+1;
	dongdau(dai);
	cout<<'\n';
	donghai(dai);
	cout<<'\n';
	donggiua(dai);
	cout<<'\n';
	donghai(dai);
	cout<<'\n';
	dongdau(dai);
}