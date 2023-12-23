#include <iostream>
using namespace std;

void fungsi(int a, int b, int k, int &x)
{
    while (k--)
    {
        x = abs(a * x + b);
    }
}

int main()
{
    int a, b, k, x;
    cin >> a >> b >> k >> x;

    fungsi(a, b, k, x);
    cout << x;
}
