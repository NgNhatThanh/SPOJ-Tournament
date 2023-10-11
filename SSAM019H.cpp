#include <iostream>
using namespace std;
#define ll long long
 
ll mod = 1e9+7;
int n=2;
long long k;
 
struct mt {
	ll arr[2][2]= {{1,1}, {1,0}};
	mt operator * (mt B) {
		mt tmp;
		for(int i=0; i<2; i++) {
			for(int j=0; j<2; j++) {
				ll res=0;
				for(int k=0; k<2; k++) {
					res += this->arr[i][k]*B.arr[k][j];
					res%=mod;
				}
				tmp.arr[i][j]=res;
			}
		}
		return tmp;
	}
};
 
mt donvi;
 
void ktao() {
	donvi.arr[0][1]=0;
	donvi.arr[1][0]=0;
	donvi.arr[1][1]=1;
}
 
mt Pow(mt a, long long b) {
	mt res=donvi;
	if(b==0) return donvi;
	res = Pow(a, b/2);
	res = res*res;
	if(b%2) res = res*a;
	return res;
}
 
int main () {
	ktao();
	int t;
	cin>>t;
	while(t--) {
		cin>>k;
		mt a;
		mt res = Pow(a,k);
		cout<<res.arr[1][0]<<'\n';
	}
} 