#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void chuanhoa(string &x){
	int i=0;
	while(x[i]=='0') i++;
	x.erase(0,i);
	if(x.size()==0) x="0";
}
 
int cmp(string a, string b){
	if(a.size()!=b.size()){
		int d1=a.size(), d2=b.size();
		int tmp = abs(d1-d2);
		string add="";
		while(tmp--){
			add+="0";
		}
		if(a.size()<b.size()){
			add+=a;
			a=add;
		}
		else{
			add+=b;
			b=add;
		}
		return a<b;
	}
	return a<b;
}
 
int main() {
	int n;
	int t=1;
	while(cin>>n){
		if(!n) return 0;
		string arr[n];
		for(string &x : arr){
			cin>>x;
			chuanhoa(x);
		}
		sort(arr, arr+n, cmp);
		cout<<"Case "<<t++<<": ";
		if(arr[0]==arr[n-1]) cout<<"There is a row of trees having equal height.\n";
		else cout<<arr[0]<<" "<<arr[n-1]<<'\n';
	}
}  