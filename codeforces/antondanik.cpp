#include <iostream>
#include <string>
using namespace std;

int a, d,n; 
string s;
int main() {
    cin >> n; 
 
    cin >> s;
    for (int i = 0; i < n; i++) {
         if ( s[i] == 'A') {
                a++;
         }
      else  {  
         d++;
     }
    }
if (a > d) {
    cout << "Anton";
}
else if (d > a) {
    cout << "Danik";
} 
else {
    cout << "Friendship";
}

}
