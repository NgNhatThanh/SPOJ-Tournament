#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int m, s;
	cin>>m>>s;
	if(s>9*m || (s==0 && m>1)) cout<<"-1 -1";
	else {
		string lon = "", be = "";
		int tmp = s;
		while( tmp ) {
			if(tmp<=9 && m-be.size()>1) {
				be+=(tmp-1+48);
				tmp-=(tmp-1);
				break;
			} else {
				if(tmp>9) {
					tmp-=9;
					be+=(9+48);
				} else {
					be+=(tmp+48);
					tmp=0;
				}
			}
		}
		while(s){
			if(s>9){
				lon+=(9+48);
				s-=9;
			}
			else{
				lon+=(s+48);
				s=0;
			}
		}
		while(lon.size()<m) lon+='0';
		if(tmp){
			while(be.size()<m-1) be+='0';
			be+='1';
		}
		else {
			while(be.size()<m) be+='0';
		}
		reverse(be.begin(), be.end());
		cout<<be<<" "<<lon;
	}
}