#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	string s;
	cin>>s;
	string res;
	int k=0;
	int cong=0;
	for(int i=s.size()-1;i>=0;i--){
		if(k==3){
			k=0;
			res+=cong+48;
			cong=0;
		}
		int tmp = s[i]-48;
		cong+=tmp*pow(2,k);
		k++;
	}
	if(cong) res+=cong+48;
	reverse(res.begin(), res.end());
	cout<<res;
}
