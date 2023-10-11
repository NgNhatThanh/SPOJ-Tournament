#include <iostream>
using namespace std;
 
int n,k;
int arr[25];
int ok=1;
void ktao(){
	for(int i=1; i<=k; i++) arr[i]=i;
}
 
void sinh(){
	int i=k;
	while(i>=1 && arr[i]==n-k+i){
		i--;
	}
	if(i==0) ok=0;
	else{
		arr[i]++;
		for(int j=i+1; j<=k; j++) arr[j]=arr[j-1]+1;
	}
}
 
int main() {
	int a;
	cin >> a;
	while(a--){
		ok=1;
		cin >> n >> k;
		ktao();
		while(ok){
			for(int i=1; i<=k; i++) cout << arr[i];
			cout << ' ';
			sinh();
		}
		cout << '\n';
	}
} 