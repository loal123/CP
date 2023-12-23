#include <bits/stdc++.h>
using namespace std;
string bit;
int n;
int m = 0;
int main() {
    cin >> n; 
    for (int i = 0; i < n; i++) {
    cin >> bit;
    if (bit == "++X" || bit == "X++") {
       m++; 
    }
    else {
        m--;
    }
    }
    cout << m;
}