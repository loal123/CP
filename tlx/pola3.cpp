#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int m = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1 ; j++) {
            cout << m % 10;
            m++;
        }

    cout << endl; 
}
}