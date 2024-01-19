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
// Super is a cute girl
const int maxn = 200 * 1000 + 5;
void solve()
{

    int n, k;
    cin >> n >> k;

    bool can = false;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<vector<int>> v(maxn);
    for (int i = 0; i < n; i++)
    {
        int x = a[i];
        int cur = 0;
        while (x > 0)
        {
            v[x].pb(cur);
            x /= 2;
            ++cur;
        }
    }
    int mini = INF;
    for (int i = 0; i <= maxn; i++)
    {
        sort(all(v[i]));
        if (v[i].size() < k)
            continue;
        mini = min(mini, accumulate(v[i].begin(), v[i].begin() + k, 0));
    }
    cout << mini;
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