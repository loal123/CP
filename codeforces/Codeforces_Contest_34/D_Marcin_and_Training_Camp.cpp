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
ll curr = 0;
ll ans = 0;
const int maxn = 7005;
vi adj[maxn];
vector<bool> vis(maxn, 0);
vl a(maxn), b(maxn);
void solve()
{
    int n;
    cin >> n;
    map<int, int> cnt;
    vector<bool> have(n);
    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vi nums;
    for (auto i : cnt)
    {
        if (i.se > 1)
        {
            nums.pb(i.fi);
            for (int j = 0; j < n; j++)
            {
                if (a[j] == i.fi)
                {
                    ans += b[j];
                    have[j] = 1;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        bool can = false;
        if (have[i])
            continue;
        for (auto j : nums)
        {
            if ((a[i] ^ j) < j && __builtin_popcount(a[i]) < __builtin_popcount(j))
                can = 1;
        }
        if (can)
        {
            ans += b[i];
            nums.pb(i);
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