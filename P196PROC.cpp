#include <iostream>
#define ll long long
using namespace std;

char thang(char a) {
	if(a=='G') return 'K';
	if(a=='K') return 'B';
	return 'G';
}

int main() {
	int n;
	cin>>n;
	string a, b;
	cin>>a>>b;
	for(int i=0; i<a.size(); i++) {
		if(a[i]==b[i]) cout<<thang(a[i]);
		else {
			if(a[i]==thang(b[i])) cout<<a[i];
			else cout<<b[i];
		}
	}
}