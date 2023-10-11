#include <iostream>
#define ll long long
using namespace std;

int main() {
	int n,a,b;
	cin>>n>>a>>b;
	int arr[n];
	int res=0;
	for(int &x : arr) {
		cin>>x;
		if(x==1) {
			if(a) a--;
			else if(b) {
				b--;
				a++;
			} else res++;
		} else {
			if(b) b--;
			else res+=2;
		}
	}
	cout<<res;
}