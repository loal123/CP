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
    int n;
    cin >> n;
    vi v(n);
    map<ll, ll> m;
    m[2] = 3;
    m[3] = 4;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] + v[i + 1] == 5)
        {
            cout << "Infinite\n";
            return;
        }
    }
    ll ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (v[i] == 1)
        {
            ans += m[v[i - 1]];
        }
        else
        {
            if (i > 1)
            {
                if (v[i] == 2 && v[i - 2] == 3)
                    ans--;
            }
            ans += m[v[i]];
        }
    }
    cout << "Finite\n";
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