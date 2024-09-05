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
    int n, k;
    cin >> n >> k;
    int pref[n + 1];
    int suff[n + 1];
    pref[0] = 0;
    suff[n] = 0;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        pref[i + 1] = gcd(v[i], pref[i]);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        suff[i] = gcd(v[i], suff[i + 1]);
    }
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, gcd(pref[i], suff[i + 1]));
    }
    if (k == 1)
    {
        cout << maxi << '\n';
        return;
    }
    map<int, int> m;
    for (auto i : v)
    {

        for (int j = 1; (ll)j * j <= i; j++)
        {
            if (i % j == 0)
            {
                m[j]++;

                if (i / j != j)
                    m[i / j]++;
            }
        }
    }
    int ans = 0;
    for (auto i : m)
    {
        if (i.se + k >= n)
        {
            ans = max(ans, i.fi);
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