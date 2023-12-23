#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, x;
    cin >> a >> b >> c >> d;
    a = a + a;
    b = a + b;
    c = a + b + c;
    d = a + b + c + d;
    x = a + b + c + d;
    cout << x;
    return 0;
}
