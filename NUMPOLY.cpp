#include <iostream>
using namespace std;

long long tohop(int n, int k=4){
	if(k==0 || k==n) return 1;
	return tohop(n-1,k-1) + tohop(n-1,k);
}
 
int main(){
	int n;
	cin >> n;
	if(!n) cout << "0";
	else cout << tohop(n);
} 