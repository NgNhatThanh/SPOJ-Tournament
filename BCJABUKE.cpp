#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	int n, m;
	cin >> n >> m;
	int k;
	int l=1, r=m;
	int res=0;
	cin >> k;
	int tmp;
	for(int i=0; i<k; i++){
		cin >> tmp;
		if(tmp>r || tmp<l){
			if(tmp>r){
				res += tmp-r;
				l=tmp-m+1;
				r=tmp;
			}
			else if(tmp<l){
				res += l-tmp;
				r=tmp+m-1;
				l=tmp;
			}
		}
	}
	cout << res;
}  