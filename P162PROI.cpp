#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

void chuanhoa(string &s){
	reverse(s.begin(), s.end());
	int tmp = '-';
	s.pop_back();
	while(s[s.size()-1]=='0') s.pop_back();
	if(s.size()==0) s="0";
	else{
		s.push_back(tmp);
		reverse(s.begin(), s.end());
	}
}

int main() {
	string s;
	cin>>s;
	if(s[0]=='-'){
		int dai = s.size();
		char tmp = s[dai-1];
		char tmp2 = s[dai-2];
		char add = min(tmp, tmp2);
		s.pop_back();
		s.pop_back();
		s.push_back(add);
		chuanhoa(s);
	}
	cout<<s;
}