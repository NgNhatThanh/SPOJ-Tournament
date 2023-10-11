#include <iostream>
using namespace std;
 
int main ()
{
	int n;
	cin >> n;
	cin.ignore();
	string arr[n];
	cin >> arr[0];
	int res=1;
	for(int i=1; i<n; i++){
		cin >> arr[i];
		if(arr[i]!=arr[i-1]) res++;
	}
	cout << res;
}  