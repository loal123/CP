#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int h = 0;
    int m = 0;

    if (n >= 3600)
    {
        h += n / 3600;
        n -= h * 3600;
        cout << h << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    if (n >= 60)
    {
        m += n / 60;
        n -= m * 60;
        cout << m << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    cout << n << endl;
}
