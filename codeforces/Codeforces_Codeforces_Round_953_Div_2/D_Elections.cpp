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
    ll n, c;
    cin >> n >> c;
    vl v(n);
    ll maxi = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        maxi = max(maxi, v[i]);
    }

    v[0] += c;

    vl prefmaxi(n + 1);
    set<int> s;

    vl prefsum(n + 1, 0);
    prefmaxi[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        prefmaxi[i] = prefmaxi[i - 1] + (v[i - 1] == maxi ? 1 : 0);
        prefsum[i] = prefsum[i - 1] + v[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] == maxi)
        {
            if (prefmaxi[i] == 0)
                cout << 0;
            else
                cout << i;
            cout << " ";

            continue;
        }
        ll curr = prefsum[i + 1];
        ll cnt = i;
        if (prefsum[i + 1] >= maxi)
        {
            cout << cnt << " ";
            continue;
        }
        else
        {
            cout << cnt + 1 << " ";
        }
    }
    cout << '\n';
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