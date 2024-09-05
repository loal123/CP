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
#define all(v) v.begin(), v.end()
#define SZ(x) ((int)((x).size()))
#define pow2(x) ((ll)(x) * (x))
const ll mod = 998000027;
const int INF = 1e9 + 5; // 998244353
const ll INFF = 1e18 + 5;
// Super is the cutest girl
ll binpow(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        a %= mod;
        res %= mod;
        b >>= 1;
    }
    return res;
}
void solve()
{
    int n;
    cin >> n;
    vl a(205), b(205);
    vector<vi> div(205);
    vl cnt(205, 0);
    vector<vl> rcnt(205, vl(205, 0));

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (b[i] > a[i])
        {
            cout << -1 << '\n';
            return;
        }
        if (b[i] > a[i] / 2 && b[i] != a[i])
        {
            cout << -1 << '\n';
            return;
        }
    }
    for (int i = 0; i < n; i++)
    {
        ll xd = a[i] - b[i];
        if (xd == 0)
            continue;
        for (int j = 1; j * j <= xd; j++)
        {
            if (xd % j == 0)
            {
                if (j > b[i])
                    div[i].pb(j);

                if (j != xd / j && xd / j > b[i])
                {
                    div[i].pb(xd / j);
                }
            }
        }
        sort(all(div[i]));
        cnt[div[i][0]]++;

        int sz = SZ(div[i]);
        for (int j = 1; j < sz; j++)
        {
            rcnt[div[i][j]][div[i][0]]++;
        }
    }
    for (int i = 2; i <= 201; i++)
    {
        if (cnt[i] == 0)
            continue;
        for (int j = i - 1; j >= 1; j--)
        {
            cnt[j] -= rcnt[i][j];
            cnt[i] += rcnt[i][j];
            rcnt[i][j] = 0;
        }
    }
    ll ans = 0;
    for (int i = 1; i <= 201; i++)
    {
        if (cnt[i])
        {
            ans += binpow(2, i);
            ans %= mod;
        }
    }
    cout << ans << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // int t; cin >> t; while(t--)
    solve();
}