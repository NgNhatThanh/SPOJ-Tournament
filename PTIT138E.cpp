#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
	int a;
	cin >> a;
	cin.ignore();
	while(a--) {
		string s;
		cin >> s;
		for(int i=s.size()-1; i>=1; i--) {
			if(s[i] != '0') {
				if(s[i] >= '5') s[i-1]++;
				s[i]='0';
			}
		}
		if(s[0] == '9'+1){
			cout << '1';
			s[0]='0';
		}
		cout << s << '\n';
	}
} 