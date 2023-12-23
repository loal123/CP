#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
void solve()
{
    ll n, m, a;
    cin >> n >> m >> a;
    m += a - 1;
    n += a - 1;
    cout << (n / a) * (m / a) << endl;
}
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}
