#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    n = n % 4;
    int m = 8;
    m = pow(m, n);
    cout
        << m % 10 << endl;
}