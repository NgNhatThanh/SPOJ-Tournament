#include <bits/stdc++.h>

using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--){
		string s;
		cin>>s;
		int ok=1;
		for(int i=0;i<s.size();i++){
			int tmp = s[i]-48;
			if((i+1)%2){
				if(tmp%2==0){
					ok=0;
					break;
				}
			}
			else if((i+1)%2==0){
				if(tmp%2){
					ok=0;
					break;
				}
			}
		}
		if(ok) cout<<"YES\n";
		else cout<<"NO\n";
	}
}