#include <bits/stdc++.h>
using namespace std;
#define faster ios::sync_with_stdio(false); cin.tie(nullptr);
 
int l1=0, l2=0, l3=0;
 
int checkl3(int n){
	int tmp=0, res=n;
	while(n){
		tmp = tmp*10 + n%10;
		n /= 10;
	}
	return tmp == res;
}
 
int checkl2(int n){
	int res = 0;
	while(n){
		res += n%10;
		n /= 10;
	}
	return res%10 == 0;
}
 
int checkl1(int n){
	while(n){
		int tmp = n%10;
		if(tmp == 0) return 0;
		n /= 10;
	}
	return 1;
}
 
void sang(){
	for(int i=100000; i<=999999; i++){
		if(checkl3(i)){
			l3++;
			if(checkl2(i)){
				l2++;
				if(checkl1(i)) l1++;
			}
		}
	}
}
 
void process(){
	int n,m,k;
	cin >> n >> m >> k;
	int t1=l1, t2=l2, t3=l3;
	t1-=n; t2-=n; t3-=n;
	t2-=m; t3-=m;
	t3-=k;
	if(t1<0 || t2<0|| t3<0 ) cout << "NO\n";
	else cout << "YES\n";
}
 
int main() {
	sang();
	faster
	int a;
	cin >> a;
	while(a--){
		process();
	}
}  