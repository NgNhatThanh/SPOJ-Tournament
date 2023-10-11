#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int a,b;
	cin>>a>>b;
	int ti=0, bang=0, teo=0;
	for(int i=1;i<=6;i++){
		if(abs(a-i)<abs(b-i)) ti++;
		else if(abs(a-i)>abs(b-i)) teo++;
		else bang++;
	}
	cout<<ti<<" "<<bang<<" "<<teo;
}
