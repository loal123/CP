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
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll a[n];
    ll b[m];
    ll maxa = 0, mina = 1e9 + 1;
    ll maxb = 0, minb = 1e9 + 1;
    ll totala = 0, totalb = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        maxa = max(a[i], maxa);
        mina = min(a[i], mina);
        totala += a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        maxb = max(b[i], maxb);
        minb = min(b[i], minb);
        totalb += b[i];
    }
    if (mina > maxb || mina > minb)
    {
        if (k % 2 == 1)
        {
            cout << totala << endl;
        }
        else
        {
            cout << totala - (maxa - minb) << endl;
        }
    }

    else if (maxa >= maxb && mina >= maxb)
    {
        if (k % 2 == 1)
        {
            cout << totala << endl;
        }
        else
        {
            cout << totala - (maxa - minb) << endl;
        }
    }
    else if (mina > minb && maxa <)
        else
        {
            if (k % 2 == 1)
            {
                cout << totala + (maxb - mina) << endl;
            }
            else
            {
                cout << totala << endl;
            }
        }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}