#include <bits/stdc++.h>

using namespace std;
const double pi = 3.14159265358979;

int main() {
	int R;
	cin>>R;
	int tmp = R*R;
	double S = 1.0*pi*tmp;
	double S2 = 2*R*R;
	cout<<setprecision(6)<<fixed<<S<<'\n';
	cout<<setprecision(6)<<fixed<<S2;
}