#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    while (n > 1 && n % 2 == 0) {
        n /= 2;
    
    }
    if (n == 1) {
        cout << "ya";
    }
    else {
        cout << "bukan";
    }
    }
