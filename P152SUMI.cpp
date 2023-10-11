#include <bits/stdc++.h>
#define ll long long
using namespace std;

string s;

int res[100005];

void process(){
	for(int i=1;i<s.size();i++){
		res[i]=res[i-1]+(s[i]==s[i-1]);
	}
}

int main() {
	cin>>s;
	process();
	int n;
	cin>>n;
	while(n--){
		int l, r;
		cin>>l>>r;
		cout<<res[r-1]-res[l-1]<<'\n';
	}
}