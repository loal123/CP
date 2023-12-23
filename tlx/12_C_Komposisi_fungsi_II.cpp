#include <iostream>
using namespace std;

int a, b;
int fungsi(int k, int x)
{
    if (k == 0)
    {
        return x;
    }
    else
    {
        return abs(a * fungsi(k - 1, x) + b);
    }
}

int main()
{
    int k, x;
    cin >> a >> b >> k >> x;

    cout << fungsi(k, x);
}
