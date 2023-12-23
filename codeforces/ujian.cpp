#include <iostream>
using namespace std;


int main() {
    int n; cin >> n;
    int count = 0;
    int total, average;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >>  a[i]; 
        total += a[i]; 
    }
    average = total / n;
    for (int i = 0; i < n; i++ ) {
        if (a[i] >= average) {
            count++;
        }
    }
    cout << count;
}