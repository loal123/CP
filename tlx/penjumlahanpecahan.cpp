#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int fpb(ll a, ll b)
{
    if (b == 0)
    {
        return a;
    }
    else
        return fpb(b, a % b);
}
ll kpk(ll a, ll b)
{
    return a / fpb(a, b) * b;
}
void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    a *= kpk(b, d) / b;
    c *= kpk(b, d) / d;
    ll e, f;
    e = a + c;
    f = kpk(b, d);
    ll j = fpb(e, f);
    e /= j;
    f /= j;
    cout << e << " " << f << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
}