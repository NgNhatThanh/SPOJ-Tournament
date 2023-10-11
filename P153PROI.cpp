#include <bits/stdc++.h>

using namespace std;

int main() {
	int a;
	cin>>a;
	cin.ignore();
	while(a--){
		string s;
		getline(cin, s);
		int check[27]={};
		for(int i=0;i<s.size();i++){
			if(s[i]<97) s[i]+=32;
			check[s[i]-96]++;
		}
		int res=0;
		for(int i=1;i<=26;i++){
			if(check[i]>1 ) res+=check[i];
			check[i]=0;
		}
		cout<<res<<' ';
		for(char x : s){
			check[x-96]++;
			if(check[x-96]==1) cout<<x;
		}
		cout<<'\n';
	}
}