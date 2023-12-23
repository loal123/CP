#include <iostream> 
using namespace std;

int main() {
    int i,n;
    cin >> n; // size of array 
    int a[n];
    for ( i = 0; i < n; i++) {

        cin >> a[i];  // input numbers
}   

int b = a[0]; 
int s = a[0];

for ( i = 0; i < n; i++) {

if (a[i] > b) { // check if element is bigger than biggest number 
    b = a[i];

}

else if (a[i] < s) { // check if element smaller than smallest number 
    s = a[i];
}
}

    
cout << b << ' ' << s << endl;
}