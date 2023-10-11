#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin>>s;
	int check[27]={};
	int res=0;
	for(int i=0;i<s.size();i++){
		check[s[i]-96]++;
	}
	for(int i=1;i<=26;i++){
		if(check[i]) res++;
	}
	if(res%2) cout<<"IGNORE HIM!";
	else cout<<"CHAT WITH HER!";
}