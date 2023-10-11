#include <bits/stdc++.h>
using namespace std;
#define faster ios::sync_with_stdio(false); cin.tie(nullptr);
 
int main() {
	faster
	int a,b;
	cin >> a >> b;
	int arr[a];
	int max=0;
	for(int i=0; i<a; i++) cin >> arr[i];
	for(int i=0; i<a-2; i++){
		int sum=arr[i];
		for(int j=i+1; j<a-1; j++){
			int sum1=sum+arr[j];
			for(int k=j+1; k<a; k++){
				int sum2=sum1+arr[k];
				if(sum2 <= b){
					if(sum2>max) max=sum2;
				}
			}
		}
	}
	cout << max;
}  