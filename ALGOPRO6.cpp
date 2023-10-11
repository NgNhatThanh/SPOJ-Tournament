#include <iostream>
using namespace std;
 
int chuso(int n){
	int res=0;
	while(n){
	res+=n%10;
	n/=10;
	}
	return res;
}
 
int main() {
	int n;
	cin >> n;
	int res = 3584;
	int tmp = chuso(n);
	res += 365*tmp;
	if(n%400==0 || (n%4==0 && n%100)) res += tmp+13;
	cout << res;
} 