#include <iostream>
using namespace std;
int n;
int ok=1;
int arr[25];
void ktao(){
	for(int i=1; i<=n; i++) arr[i]=0;
}
 
void sinh(){
	int i=n;
	while(i>=1 && arr[i]!=0) arr[i--]=0;
	if(i==0) ok=0;
	else arr[i]=1;
}
 
int main() {
	int a;
	cin >> a;
	while(a--){
		ok=1;
		cin >> n;
		ktao();
		while(ok){
			for(int i=1; i<=n; i++) cout << arr[i];
			cout << ' ';
			sinh();
		}
		cout << '\n';
	}
	return 0;
} 