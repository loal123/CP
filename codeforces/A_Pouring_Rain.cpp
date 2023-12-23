#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
double pi = acos(-1);
void solve()
{
    double super, cute, is, girl;
    cin >> super >> is >> cute >> girl;
    double flandre = pow(super, 2) * pi / 4;
    if (cute / flandre <= girl)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES" << endl
             << setprecision(13) << is / ((4 * cute / (pow(super, 2) * pi)) - girl);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}