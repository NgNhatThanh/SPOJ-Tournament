#include <iostream>
#define ll long long
using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--) {
		int n;
		cin>>n;
		int arr[n];
		for(int &x : arr) {
			cin>>x;
		}
		int tang[105]= {}; // tim day con tang dan dai nhat
		int giam[105]= {}; // tim day con giam dan dai nhat
		tang[0]=1;
		giam[n-1]=1;
		for(int i=1; i<n; i++) {
			for(int j=0; j<i; j++) {
				if(arr[i]>arr[j] && tang[i]<=tang[j]) tang[i]=tang[j];
			}
			tang[i]++;
		}
		for(int i=n-2; i>=0; i--) {
			for(int j=n-1; j>i; j--) {
				if(arr[i]>arr[j] && giam[i]<=giam[j]) giam[i]=giam[j];
			}
			giam[i]++;
		}
		int res=0;
		for(int i=0; i<n; i++) res=max(res, tang[i]+giam[i]-1);//lay i lam dinh cua day Bitonic
		cout<<res<<'\n';
	}
}