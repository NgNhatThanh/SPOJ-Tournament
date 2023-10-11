#include <iostream>
using namespace std;
 
void process(){
	int n; cin >> n;
	int check[1001]={};
	int tmp;
	while(n--){
		cin >> tmp;
		check[tmp]++;
	}
	int res=1, max=0;
	for(int i=1; i<=1000; i++){
		if(check[i]>max){
			max=check[i];
			res=i;
		}
	}
	cout << res << "\n";
}
 
int main() {
	int a; cin >> a;
	while(a--){
		process();
	}
} 