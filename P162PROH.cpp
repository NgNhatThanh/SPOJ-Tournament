#include <iostream>
using namespace std;
#define ll long long

int st[41];
int sum[41];
void process(){
	st[1]=1;
	sum[1]=1;
	for(int i=2;i<=40;i++){
		st[i]=st[i-1]+i;
		sum[i]=sum[i-1]+st[i];
	}
}

int main () {
	process();
	int n;
	cin>>n;
	for(int i=1;i<=40;i++){
		if(sum[i]>n){
			cout<<i-1;
			return 0;
		}
	}
}