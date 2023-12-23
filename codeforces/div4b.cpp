#include <bits/stdc++.h>
using namespace std;


int main() {
int x,y,b, t; cin >> t;

while (t--) {
    int n; cin >> n;
int a[n],b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
int max = 0;
int pos = 0;
 for (int i = 0; i < n; i++) {
      if (a[i] <= 10 && b[i] > max) {
        max = b[i];
        pos = i + 1;
      }
}
cout << pos << endl;
}
}