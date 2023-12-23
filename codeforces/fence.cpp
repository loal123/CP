#include <bits/stdc++.h>
using namespace std;
int a, n, h, l; 
int main() {
l = 0;
cin >> n >> h;
for (int i = 0; i < n; i++) {
    cin >> a;
    if (a <= h) {
        l++;
    }
    else {
        l += 2;
    }
        }
    
    cout << l;
}