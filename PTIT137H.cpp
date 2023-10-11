#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int chuyenhe(char a) {
	int tmp;
	if(a>='A' && a<='Z') tmp=a-55;
	else if(a>='a' && a<='z') tmp=a-61;
	else tmp=a-48;
	return tmp;
}

int main() {
	string s;
	while(cin>>s) {
		if(s=="end") return 0;
		int res=0;
		for(int i=s.size()-1; i>=0; i--) {
			res+=chuyenhe(s[i]);	
		}
		if(res%61==0) cout<<"yes\n";
		else cout<<"no\n";
	}
}