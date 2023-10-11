#include <iostream>
using namespace std;
 
int n,k;
int res=0;
int arr[105];
int check[105]={};
void process(int i, int sl){
	if(k-i > n-sl) return;
	if(i==k+1){
		res++;
		return;
	}
	if(i==1){
		for(int j=sl; j<=n; j++){
			check[i]=arr[j];
			process(i+1, j+1);
		}
	}
	else{
		for(int j=sl; j<=n; j++){
			if(arr[j] > check[i-1]){
				check[i]=arr[j];
				process(i+1, j+1);
			}
		}
	}
	
}
 
int main() {
	int a;
	cin>>a;
	while(a--) {
		res=0;
		for(int i=1; i<=100; i++) check[i]=0;
		cin >> n >> k;
		for(int i=1; i<=n; i++) cin >> arr[i];
		process(1, 1);
		cout << res << '\n';
	}
} 