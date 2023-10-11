#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	int sum=0;
	int lemin=1e9;
	for(int &x : arr) {
		cin>>x;
		sum+=x;
		if(x%2 &&x<lemin) lemin=x;
	}
	if(sum%2==0) {
		sum-=lemin;
	}
	cout<<sum;
}