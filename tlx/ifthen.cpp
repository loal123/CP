#include <iostream>
#include <cmath>
using namespace std;

int numofDigits(int n) {
    int m = 0; 
    while (n >= 10) {
        n /= 10;
        m += 1;
    
    } 
    return m;
}
int main() {
    int n; cin >> n; 
    
    if ( numofDigits(n) == 0 ) {
        cout << "satuan";
    }
   else if ( numofDigits(n) == 1 ) {
        cout << "puluhan";
    }
    
   else if ( numofDigits(n) == 2 ) {
        cout << "ratusan";
    }
    else if ( numofDigits(n) == 3 ) {
        cout << "ribuan";
    }
    else {
        cout << "puluhribuan"; 
    }
   
}
