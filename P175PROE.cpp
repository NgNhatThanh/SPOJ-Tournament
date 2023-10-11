#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	string s;
	cin>>s;
	if(s.size()==1) cout<<0;
	else {
		int tmp=0;
		int cnt=1;
		for(char x : s) tmp+=x-48;
		while(tmp/10!=0) {
			cnt++;
			int sum=0;
			while(tmp) {
				sum+=tmp%10;
				tmp/=10;
			}
			tmp=sum;
		}
		cout<<cnt;
	}
}
