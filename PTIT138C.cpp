#include <bits/stdc++.h>
 
using namespace std;
 
int check(string s){
	int l=0, r=s.length()-1;
	while(l<r){
		if(s[l]!=s[r]) return 0;
		l++; r--;
	}
	return 1;
}
 
int kt(char n){
	switch (n){
		case 'A': case 'B': case 'C': return 2;
		case 'D': case 'E': case 'F': return 3;
		case 'G':case 'H': case 'I': return 4;
		case 'J': case 'K': case 'L': return 5;
		case 'M': case 'N': case 'O': return 6;
		case 'P': case 'Q': case 'R': case 'S': return 7;
		case 'T': case 'U': case 'V': return 8;
		default: return 9;
	}
}
 
int main(){
	int n;
	cin>>n;
	cin.ignore();
	while(n--){
		string s;
		getline(cin, s);
		int k=0;
		int dai=s.length();
		for(int i=0;i<dai;i++){
			if(s[i]>'Z') s[i]-=32;
			s[i]=kt(s[i])+48;
		}
		if(check(s)) cout<<"YES\n";
		else cout<<"NO\n";
	}
} 