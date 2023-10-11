#include <bits/stdc++.h>
 
using namespace std;
 
string m1="qwertyuiop";
string m2="asdfghjkl;";
string m3="zxcvbnm,./";
 
void check(char &n, string s, int move){
	for(int i=0;i<10;i++){
		if(s[i]==n){
			int des=i+move;
			if(des==10) des=0;
			else if(des==-1) des=9;
			n=s[des];
			return;
		}
	}
}
 
int main() {
	char n;
	cin>>n;
	cin.ignore();
	string s;
	cin>>s;
	int dai=s.length();
	int move;
	if(n=='L') move=1;
	else move=-1;
	for(int i=0; i<dai; i++) {
		check(s[i], m1, move);
		check(s[i], m2, move);
		check(s[i], m3, move);
	}
	cout<<s;
} 