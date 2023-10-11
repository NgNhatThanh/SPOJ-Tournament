#include <bits/stdc++.h>
 
using namespace std;

int luu[45000];
int k=0;

int check(int n){
	int tmp=sqrt(n);
	return tmp*tmp==n;
}

void sang(){
	for(int i=1;i<44722;i++){
		int tmp = i+1ll*i*(i-1)/2;
		if(check(tmp+1)) luu[k++]=tmp;
	}
}

int main() {
	sang();
	int a,b;
	int t=1;
	while(cin>>a>>b){
		if(b==0) return 0;
		int res=0;
		for(int x : luu){
			if(x+1>a && x+1<b) res++;
		}
		cout<<"Case "<<t++<<": "<<res<<'\n';
	}
} 