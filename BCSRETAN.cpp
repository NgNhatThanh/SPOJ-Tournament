#include <bits/stdc++.h>
using namespace std;
 
// bieu dien duoi dang nhi phan n bit voi 4 la bit 0, 7 la bit 1
int main() {
  int k;
  cin>>k;
  int bit = log(k+1)/log(2); //tim ra so bit can dung de bieu dien
  k=k-pow(2, bit)+1;
  int arr[bit];
  for(int i=0;i<bit;i++) arr[i]=4; // set cho tat ca bit = 0 (4)
  int i=bit-1;
  while(k){
    if(k%2) arr[i]=7;
    k/=2;
    i--;
  }
  for(int i=0;i<bit;i++) cout<<arr[i];
}
