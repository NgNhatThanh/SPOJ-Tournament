#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(){
	string s;
	cin>>s;
	int thuong=0, hoa=0;
	for(char x : s){
		if(x>='a') thuong++;
		else hoa++;
	}
	if(thuong>=hoa) transform(s.begin(), s.end(), s.begin(), ::tolower);
	else transform(s.begin(), s.end(), s.begin(), ::toupper);
	cout<<s;
}