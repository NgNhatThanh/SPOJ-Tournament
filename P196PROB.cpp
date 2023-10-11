#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int arr[3];
    for(int &x : arr) cin>>x;
    sort(arr, arr+3);
    cout<<arr[2]-arr[0];
}