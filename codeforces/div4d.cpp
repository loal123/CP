#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        int count = 1, ans = 0; // count 1 element (a[0] is counted)
        int n, k; cin >> n >> k;
        int a[n]; // 0 to n-1, a[n]?
        for (int i =0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);

        for (int i = 0; i < n - 1; i++) { // counting n-1 elements
            // i = n-1
            // a[n] - a[n-1]
            if (a[i + 1] - a[i] <= k) { // (we are pointing at a[i+1])
                count++;
            } else {
                // we're done counting
                // a[i+1] is in a different group
                ans = max(ans, count);
                count = 1; // we are counting the new group a[i+1]
            }
        }
        // we counted until a[n-1]
        // we havent considered the count of the group of a[n-1]
        ans = max(ans, count);

        cout << n - ans << endl;
    }
}


/*
[4] must be balanced regardless of value of k

abc   defg   hi  jklmn
*/