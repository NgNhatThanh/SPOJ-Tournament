#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(string p, string q){
	if(p+q<q+p) return 1;
	return 0;
}

int main() {
	int a;
	cin>>a;
	while(a--){
		int n;
		cin>>n;
		vector<string> v;
		string tmp;
		for(int i=0;i<n;i++){
			cin>>tmp;
			v.push_back(tmp);
		}
		sort(v.begin(), v.end(), cmp);
		for(int i=n-1;i>=0;i--) cout<<v[i]; // neu chay tu 0->n-1 thi bi loi SIGSEGV, khong hieu tai sao 
		cout<<'\n';
	}
}