#include <iostream>
#include <cmath>

using namespace std;



int main() {
    int n; cin >> n;
    
   while (n--) {
    int count = 0;
    int D; cin >> D;
    

    for (int i = 1; i <= sqrt(D); i++ ) {
        if (D % i == 0) {
        count++;
        }
    }

if (count <= 2) {
    cout << "YA" << endl;
}
else {
    cout << "BUKAN" << endl;
}
}

}
  