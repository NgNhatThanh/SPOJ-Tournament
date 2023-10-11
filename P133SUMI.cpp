#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin>>s;
	int hang=1;
	int dai=s.size();
	int res=0;
	while(dai/hang>=hang){
		if(dai%hang==0) res=hang;
		hang++;
	}
	for(int i=0;i<res;i++){
		for(int j=i;j<dai;j+=res) cout<<s[j];
	}
}