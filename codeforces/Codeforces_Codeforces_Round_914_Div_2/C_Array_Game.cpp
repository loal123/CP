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
    int n, k;
    cin >> n >> k;
    ll ans = INFF;
    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (k >= 3)
    {
        cout << 0 << '\n';
        return;
    }
    if (k == 1)
    {
        ll mini = *min_element(all(v));
        sort(all(v));
        for (int i = 0; i < n - 1; i++)
        {
            mini = min(mini, v[i + 1] - v[i]);
        }
        cout << mini << '\n';
        return;
    }
    ll mini = *min_element(all(v));

    sort(all(v));
    vl v2;
    for (int i = 0; i < n - 1; i++)
    {
        mini = min(mini, v[i + 1] - v[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            v2.pb(abs(v[i] - v[j]));
        }
    }
    sort(all(v2));

    ll realmini = *min_element(all(v));
    int N = SZ(v2);
    for (auto i : v)
    {
        int x = lower_bound(all(v2), i) - v2.begin();
        if (x > 0 && x <= N)
        {
            realmini = min(realmini, abs(i - v2[x - 1]));
        }
        if (x < N - 1)
            realmini = min(realmini, abs(i - v2[x + 1]));
        if (x != N)
            realmini = min(realmini, abs(i - v2[x]));

        if (x < N - 2)
            realmini = min(realmini, abs(i - v2[x + 2]));

        if (x > 1)
            realmini = min(realmini, abs(i - v2[x - 2]));
    }

    cout << min(mini, realmini) << '\n';
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