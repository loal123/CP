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
const ll mod = 1e9 + 7;
const int INF = 1e9 + 5; // 998244353
const ll INFF = 1e18 + 5;
// Super is the cutest girl
void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;

    vector<vl> a(n, vl(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    ll sum0 = 0, sum1 = 0;
    ll pref[n + 2][m + 2];
    vector<vector<char>> c(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> c[i][j];
            if (c[i][j] == '0')
                sum0 += a[i][j];
            else
                sum1 += a[i][j];
        }
    }
    set<ll> numss;
    vl nums;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            ll yeah = 0;

            if (c[i - 1][j - 1] == '0')
                yeah = -1;
            else
                yeah = 1;
            pref[i][j] = yeah + pref[i][j - 1] + pref[i - 1][j] - pref[i - 1][j - 1];
        }
    }
    ll needed = abs(sum0 - sum1);
    if (needed == 0)
    {
        cout << "YES\n";
        return;
    }
    for (int i = 0; i <= n - k; i++)
    {
        for (int j = 0; j <= m - k; j++)
        {
            ll idk = pref[i + k][j + k] - pref[i][j + k] - pref[i + k][j] + pref[i][j];
            numss.insert(abs(idk));
        }
    }
    set<ll> real;

    for (auto i : numss)
    {
        if (i != 0)
            nums.pb(i);
    }
    ll yeahhh = 0;
    vl divisors;
    bool can = false;
    for (ll i = 1; (ll)i * i <= needed; i++)
    {
        if (needed % i == 0)
        {
            real.insert(i);
            if (i != needed / i)
                real.insert(needed / i);
        }
    }
    for (auto i : real)
        divisors.pb(i);

    for (auto i : nums)
    {
        if (i != 0)
            yeahhh = gcd(i, yeahhh);
    }
    if (yeahhh == 0)
    {
        cout << "NO\n";
        return;
    }
    if (needed % yeahhh == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--)
        solve();
}