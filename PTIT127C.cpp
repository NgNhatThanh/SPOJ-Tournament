#include <iostream>
#include <algorithm>
 
using namespace std;
 
int cmp(pair<int ,int> a, pair<int, int> b){
	return a.second<b.second;
}
int main() {
	ios::sync_with_stdio(false); cin.tie(nullptr);
	int n;
	cin >> n;
	pair<int, int> arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i].first >> arr[i].second;
	}
	sort(arr, arr+n, cmp);
	int res=1;
	int com=arr[0].second;
	for(int i=1; i<n; i++){
		if(arr[i].first >= com){
			res++;
			com=arr[i].second;
		}
	}
	cout << res;
}  