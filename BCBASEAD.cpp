#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

string so[16] = {"{}"};

void sang(){
	for(int i=1;i<=15;i++){
		so[i]="{";
		for(int j=0;j<i;j++){
			so[i]+=so[j];
			if(j<i-1) so[i]+=",";
		}
		so[i]+="}";
	}
}

int main() {
	sang();
	int a;
	cin>>a;
	while(a--){
		string m,n ;
		cin>>m>>n;
		int p , q;
		for(int i=0;i<16;i++){
			if(so[i]==m) p=i;
			if(so[i]==n) q=i;
		}
		cout<<so[p+q]<<'\n';
	}
}