#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;

    for (int i = 0; i <= n; i++) {
        if (i % 10 == 0) {
            continue;
        }
        else if (i == 42) {
            cout << "ERROR";
            break;
        }
        else {
            cout << i << endl;
        }
    }
}