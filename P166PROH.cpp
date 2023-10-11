#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int check(int n){
  int tmp =n;
	map<int,int> mp;
	vector<int> v;
	for(int i=2;i<=sqrt(n);i++){
		int mu=0;
		while(n%i==0){
			mu++;
			n/=i;
		}
	  if(mu) v.push_back(i);
	}
	if(n>1) v.push_back(n);
	if(v.size()!=2) return 0;
	return 1;
}
 
int main() {
	int n;
	cin>>n;
	int res=0;
	for(int i=6;i<=n;i++){
		if(check(i)) res++;
	}
	cout<<res;
}  