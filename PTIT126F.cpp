#include <bits/stdc++.h>

using namespace std;

int main ()
{
	string s;
	cin>>s;
	int res=0;
	int l=0, r=0;
	int lm=0, rm=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='L'){
			l++;
			lm++;
			res = max(res , l-rm);
		}
		else if(s[i]=='R'){
			r++; 
			rm++;
			res = max(res , r-lm);
		}
		else{
			l++;
			res = max(res , l-rm);
			r++;
			res = max(res , r-lm);
		}
	}
	cout<<res;
}