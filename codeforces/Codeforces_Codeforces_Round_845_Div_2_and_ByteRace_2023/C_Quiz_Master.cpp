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
const int maxn = 1e5 + 5;
vi factors[maxn];

void precalc()
{
    for (int i = 1; i <= 100000; i++)
    {
        for (int j = i; j <= 100000; j += i)
            factors[j].pb(i);
    }
}
void solve()
{
    int n, m;
    cin >> n >> m;
    vi v(n);
    map<int, int> counts;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(all(v));
    int cnt = 0;
    int ans = INF;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        for (auto x : factors[v[i]])
        {
            if (x > m)
                break;

            if (!counts[x]++)
                cnt++;
        }
        while (cnt == m)
        {
            ans = min(ans, abs(v[j] - v[i]));

            for (auto x : factors[v[j]])
            {
                if (x > m)
                    break;
                if (--counts[x] == 0)
                {
                    cnt--;
                }
            }
            j++;
        }
    }
    cout << (ans == INF ? -1 : ans) << endl;
    // for (int i = 1; i <= m; i++)
    // {
    //     if (!counts[i])
    //     {
    //         cout << -1 << endl;
    //         return;
    //     }
    // }
    // int l = 0, r = n - 1;
    // bool can = true;

    // for (l; l < n; l++)
    // {
    //     for (int div = 1; div * div <= v[l]; div++)
    //     {
    //         if (div > m)
    //             continue;
    //         if (v[l] % div == 0)
    //         {

    //             if (counts[div] == 1)
    //             {
    //                 can = false;
    //                 break;
    //             }
    //             counts[div]--;

    //             if (div != v[l] / div)
    //             {
    //                 if (v[l] / div > m)
    //                     continue;

    //                 if (counts[v[l] / div] == 1)
    //                 {
    //                     can = false;
    //                     counts[div]++;
    //                     break;
    //                 }
    //                 counts[v[l] / div]--;
    //             }
    //         }
    //     }
    //     if (!can)
    //         break;
    // }

    // can = 1;
    // for (r; r >= l; r--)
    // {
    //     for (int div = 1; div * div <= v[r]; div++)
    //     {
    //         if (div > m)
    //             continue;
    //         if (v[r] % div == 0)
    //         {
    //             if (counts[div] == 1)
    //             {
    //                 can = false;
    //                 break;
    //             }
    //             counts[div]--;
    //             if (v[r] / div > m)
    //                 continue;
    //             if (div != v[r] / div)
    //             {

    //                 if (counts[v[r] / div] == 1)
    //                 {
    //                     can = false;
    //                     break;
    //                 }
    //                 counts[v[r] / div]--;
    //             }
    //         }
    //     }
    //     if (!can)
    //         break;
    // }
    // cout << v[r] - v[l] << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    precalc();
    int t;
    cin >> t;
    while (t--)
        solve();
}
// 1 = 4
// 2 = 1
// 3 = 2
// 7 = 1
// 9 = 1