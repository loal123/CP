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
    vi v(n);
    map<int, int> counts;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        counts[v[i]]++;
    }
    vector<pii> v2;
    for (auto i : counts)
    {
        v2.pb({i.fi, i.se});
    }
    sort(v2.rbegin(), v2.rend());
    int used = 0;
    for (int i = 0; i < v2.size(); i++)
    {
        bool none = false;
        while (v2[i].se > 1 && !none)
        {
            bool realnone = true;
            for (int j = 0; j < i; j++)
            {
                if (v2[j].se)
                {
                    // then we can just do somehting
                    v2[j].se--;
                    v2[i].se--;
                    used++;
                    none = false;
                    realnone = false;
                    if (v2[i].se <= 1)
                        break;

                    if (used == k)
                        break;
                }
            }
            none = realnone;
        }
    }
    ll ans = 0;

    while (used < k)
    {
        for (int i = 0; i < v2.size(); i++)
        {
            if (v2[i].se)
            {
                for (int j = 0; j <= i; j++)
                {
                    if (v2[j].se)
                    {
                        if (i == j)
                        {
                            if (v2[j].se < 2)
                                continue;
                        }
                        used++;
                        v2[i].se--;
                        v2[j].se--;
                        ans += v2[j].fi / v2[i].fi;

                        if (used == k)
                            break;
                    }
                }
                if (used == k)
                    break;
            }
        }
    }

    for (auto i : v2)
    {
        ans += (ll)i.fi * i.se;
    }
    cout << ans << endl;
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