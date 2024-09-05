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
vector<pll> facsum;
ll fac[15];
void solve()
{
    ll x;
    cin >> x;
    ll mini = __builtin_popcountll(x);

    for (auto i : facsum)
    {
        ll bruh = x - i.fi;
        if (i.fi <= x)
            mini = min(mini, __builtin_popcountll(bruh) + i.se);
    }
    cout << mini << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    fac[1] = 1;
    for (int i = 2; i <= 14; i++)
        fac[i] = i * fac[i - 1];

    for (int i = 1; i <= (1 << 14); i++)
    {
        ll curr = 0;
        int op = 0;
        for (int j = 2; j <= 13; j++)
        {

            if ((i & (1 << j)))
            {
                curr += fac[j + 1];
                op++;
            }
        }
        facsum.pb({curr, op});
    }
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--)
        solve();
}