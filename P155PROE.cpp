#include <bits/stdc++.h>

using namespace std;

int check(char n){
	switch (n){
		case '0': case '2': case '6': case '9': return 2;
		case '3': case '4': return 3;
		case '1': return 7;
		case '5': return 4;
		case '7': return 5;
		case '8': return 1;
	}
}

int main() {
	string s;
	cin>>s;
	int res=1;
	for(int i=0;i<2;i++){
		res*=check(s[i]);
	}
	cout<<res;
}	