#include <bits/stdc++.h>
using namespace std;

int main()
{
    int b, c, d;
    cin >> b >> c >> d;
    for (int i = 1; i <= b; i++)
    {
        if (c % i == d)
            cout << i << endl;
    }
}