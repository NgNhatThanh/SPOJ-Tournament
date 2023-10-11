#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll fibo[95]= {0,1,1};

void cal() {
	for(int i=3; i<=90; i++) fibo[i]=fibo[i-1]+fibo[i-2];
}

int main() {
	cal();
	int n;
	cin>>n;
	cout<<fibo[n];
}