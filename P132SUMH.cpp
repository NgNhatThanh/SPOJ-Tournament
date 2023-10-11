#include <iostream>
using namespace std;
 
int main() {
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	int mot[5000]={};
	int hai[5000]={};
	for(int i=1; i<=1000; i+=b+a){
	   for(int j=0; j<a; j++) mot[i+j]=1;
	}
	for(int i=1; i<=1000; i+=c+d){
		for(int j=0; j<c; j++) hai[i+j]=1;
	}
	int tmp;
	int k=3;
	while(k--){
		cin >> tmp;
		int res=mot[tmp]+hai[tmp];
		if(res==0) cout << "none\n";
		else if(res==1) cout << "one\n";
		else cout << "both\n";
	}
} 