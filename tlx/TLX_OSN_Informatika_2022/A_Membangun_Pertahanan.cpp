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

    int n, q;
    cin >> n >> q;
    vl v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        if (i & 1)
            v[i] = (i + 1) / 2;
        else
            v[i] = (n + 1 - (i / 2));
    }

    // subtask 1 -3
    map<ll, ll> cnt;
    vl pref(n + 1);
    for (int i = 1; i <= n; i++)
    {
        pref[i] = pref[i - 1] + v[i];
    }

    for (int i = 1; i <= n; i++)
    {
        for (int l = 0; l <= n - i; l++)
        {
            cnt[pref[l + i] - pref[l]]++;
        }
    }
    for (int i = n; i <= 1000; i++)
    {
        if (cnt[i] != 1)
        {
            cout << i << ' ' << cnt[i] << '\n';
        }
    }
    // subtask 4
    // while (q--)
    // {
    //     ll x;
    //     cin >> x;
    //     ll ans = 0;
    //     ll curr = 0;
    //     curr += v[1];
    //     if (curr == x)
    //         ans++;
    //     int l = 1, r = 1;
    //     while (r < n)
    //     {
    //         if (curr < x)
    //         {
    //             curr += v[++r];
    //         }
    //         else
    //         {
    //             curr -= v[l++];
    //         }
    //         if (curr == x)
    //             ans++;
    //     }
    //     cout << ans << '\n';
    // }
    // ll n, q;
    // cin >> n >> q;
    // ll out = 1, in = 1;
    // ll curr = 101;
    // map<ll, ll> cnt;
    // cnt[101] = n / 2;
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