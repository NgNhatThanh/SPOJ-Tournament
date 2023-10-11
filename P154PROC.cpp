#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int n;
	cin>>n;
	cout<<"+------------------------+\n";
	string arr[4];
	arr[0]="|#.#.#.#.#.#.#.#.#.#.#.|D|)";
	arr[1]="|#.#.#.#.#.#.#.#.#.#.#.|.|";
	arr[2]="|#.......................|";
	arr[3]="|#.#.#.#.#.#.#.#.#.#.#.|.|)";
	for(int i=1;i<23;i++){
		for(int j=0;j<4;j++){
			if(n && arr[j][i]=='#'){
				 arr[j][i]='O';
				 n--;
			}
		}
	}
	for(string x : arr) cout<<x<<'\n';
	cout<<"+------------------------+";
}