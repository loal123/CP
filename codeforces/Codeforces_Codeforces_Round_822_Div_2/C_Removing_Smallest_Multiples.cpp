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
const int INF = 1e9 + 5;
const ll INFF = 1e18 + 5;
// Super is the cutest girl
void solve()
{
    int n;
    string s;
    cin >> n >> s;
    map<ll, vl> v;
    int counts[n + 2];
    for (int i = 1; i <= n; i++)
    {
        counts[i] = i;
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            ll mini = i + 1;
            ll yeah = i + 1;
            for (ll j = 1; (ll)j * j <= yeah; j++)
            {
                if (yeah % j == 0)
                {
                    if (counts[j] == yeah)
                    {
                        mini = min(mini, j);
                    }
                    if (counts[yeah / j] == yeah)
                        mini = min(mini, yeah / j);
                }
            }
            ans += mini;
            if (yeah != mini)
                counts[yeah] += yeah;
            counts[mini] += mini;
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
    int t;
    cin >> t;
    while (t--)
        solve();
}