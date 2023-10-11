#include <iostream>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main() {
	faster()
	int n;
	cin>>n;
	int res=0;
	int arr[3];
	while(n--) {
		int cnt=0;
		for(int &x : arr) {
			cin>>x;
			if(x) cnt++;
		}
		if(cnt>=2) res++;
	}
	cout<<res;
}