#include <bits/stdc++.h>
using namespace std;
int a[1000069];
int counts[1069];

int main() {

    int n; cin >> n;
    for(int i = 0; i < n; i++) {   // input
        cin >> a[i];
        
       
    }
    int maximum = 0;
    for (int i = 0; i < n; i++ ) { // find maximum by checking each element if it is more than maximum
        if (a[i] > maximum) {
            maximum = a[i];
        }
    int t = maximum + 1;
     for (int i = 0; i < t; i++ ) { // initialize counts[i] to 0
        counts[i] = 0;
        }
    }
    for(int i = 0; i < n; i++) { // check number of times a a[i] appears
        counts[a[i]]++;
    }
int mode = 0;
int k = counts[0];
for (int i = 1; i < maximum + 1; i++) {  // find mode
    if (counts[i] > k) {
        k = counts[i];
        mode = i;

    }

    if (i > mode && counts[i] >= k) { // in case of >= 2 modes, take highest number
        mode = i;
    }
}
    cout << mode;


}
