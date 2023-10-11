#include <iostream>
#define ll long long
using namespace std;
 
ll fibo[100];
 
void sang() {
	fibo[1]=fibo[2]=1;
	for(int j=3; j<100; j++) fibo[j]=fibo[j-1]+fibo[j-2];
}
 
void process() {
	ll n,i;
	cin>>n>>i;
	while(n>2) {
		if(i<=fibo[n-2]) {
			n-=2;
		} 
		else{
			i-=fibo[n-2];
			n--;
		}
	}
	if(n==1) cout<<"A\n";
	else cout<<"B\n";
}
 
int main() {
	sang();
	int a;
	cin>>a;
	while(a--) {
		process();
	}
} 