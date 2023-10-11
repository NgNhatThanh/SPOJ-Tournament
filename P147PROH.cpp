#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    string a, b;
    int t = 1;
    while(cin >> a >> b){
        if(a == "END") return 0;
        cout << "Case " << t++ << ": "; 
        sort(begin(a), end(a));
        sort(begin(b), end(b));
        if(a == b) cout << "same\n";
        else cout << "different\n";
    }
} 