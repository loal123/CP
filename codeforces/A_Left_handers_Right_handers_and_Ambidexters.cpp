#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define fi first
#define se second
#define pb push_back
#define mp make_pair
// Super is a cute girl
void solve()
{
    int l, r, a;
    cin >> l >> r >> a;
    int mi = min(l, r), ma = max(l, r);

    if (ma - mi > a)
    {
        cout << 2 * (mi + a);
    }
    else
    {
        int temp = ma - mi;
        a -= temp;
        mi += temp;
        cout << (mi + a / 2) * 2;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}