#include <iostream>
#include <cmath>
using namespace std;
 
int phi(int n){
	int res=n;
    for(int i=2; i<=sqrt(n); i++){
    	if(n%i==0){
    		while(n%i==0) n/=i;
    		res -= res/i;
    	}
    }
    if(n>1) res -= res/n;
    return res;
}
 
int check(int n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}
 
int main() {
    int a; cin >> a;
   while(a--){
   	  int n; cin >> n;
   	  int t=phi(n);
   	  cout << check(t) << "\n";
   }
} 