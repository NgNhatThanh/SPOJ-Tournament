#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
	string a;
	while(cin>>a) {
		int check[27]={};
		for(char x : a) {
			check[x-96]++;
		}
		int cnt=0;
		//choi toi uu la moi luot ng choi bo di cac so co lan xuat hien la le
		for(int i=1; i<=26; i++) {
			if(check[i]%2) cnt++;
		}
		if(cnt%2 || cnt<=1) cout<<"First\n";
		else cout<<"Second\n";
	}
}