#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int gcf(ll a, ll b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcf(b, a % b);
    }
}
int main()
{
    cout << gcf(900000000000000010, 900000000000000029);
}