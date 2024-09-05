// Problem: D. Slimes
// Contest: Codeforces - Educational Codeforces Round 162 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1923/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
//
// Powered by CP Editor (https://cpeditor.org)

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
    cin >> n;
    vl v(n);
    vl pref(n + 1, 0);
    ll curr = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        pref[i + 1] = pref[i] + v[i];
    }

    vi nearl(n);
    vi nearr(n);

    nearl[0] = -1;

    for (int i = 1; i < n; i++)
    {
        if (v[i] == v[i - 1])
            nearl[i] = nearl[i - 1];
        else
            nearl[i] = i;
    }
    nearr[n - 1] = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i] == v[i + 1])
            nearr[i] = nearr[i + 1];
        else
            nearr[i] = i + 2;
    }

    for (int i = 1; i <= n; i++)
    {
        int mini = INF;
        int r = upper_bound(all(pref), pref[i] + v[i - 1]) - pref.begin();

        if (nearr[i] != -1 && pref[i] + v[i - 1] < pref[n])
            mini = min(abs(i - max(r, nearr[i])), mini);

        if (abs(i - r) == 1 && pref[i] + v[i - 1] < pref[n])
        {
            mini = min(mini, 1);
        }
        int l = lower_bound(all(pref), pref[i] - v[i - 1] * 2) - pref.begin();

        if (nearl[max(0, i - 2)] != -1 && pref[i] - v[i - 1] * 2 > 0)
            mini = min(abs(i - min(l, nearl[i - 2])), mini);

        if (abs(i - l) == 1 && pref[i] - v[i - 1] * 2 > 0)
        {
            mini = min(mini, 1);
        }

        if (mini == INF)
            cout << -1;
        else
            cout << mini;

        cout << " ";
    }

    cout << '\n';

    // 4 6 9 15 15 15 25
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