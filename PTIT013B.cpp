#include <bits/stdc++.h>

using namespace std;

int n;

struct bong{
	string ten;
	int diem; 
};

int cmp(bong a, bong b){
	if(a.diem==b.diem) return a.ten<b.ten;
	return a.diem>b.diem;
}

int check(bong arr[], string john, string dau, string tt){
	int minh, dich;
	bong tmp[n];
	for(int i=0;i<n;i++) tmp[i]=arr[i];
	if(tt=="thang"){
		minh=3;
		dich=0;
	}
	else if(tt=="thua"){
		minh=0;
		dich=3;
	}
	else{
		minh=1;
		dich=0;
	}
	for(int i=0;i<n;i++){
		if(tmp[i].ten==john) tmp[i].diem+=minh;
		if(tmp[i].ten==dau) tmp[i].diem+=dich;
	}
	sort(tmp, tmp+n, cmp);
	for(int i=0;i<n;i++){
		if(tmp[i].ten==john){
			return i+1;
		}
	}
}

int main() {
	int a;
	cin>>a;
	while(a--){
		cin>>n;
		string john, dau;
		cin>>john>>dau;
		bong arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i].ten>>arr[i].diem;
		}
		cout<<check(arr, john, dau, "thang")<<" "<<check(arr, john, dau, "thua")<<" "<<check(arr, john, dau, "hoa")<<'\n';
	}
	
}