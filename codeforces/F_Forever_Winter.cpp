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
    int n, m;
    cin >> n >> m;
    int counts[n];
    memset(counts, 0, sizeof(counts));
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        counts[a]++;
        counts[b]++;
    }
    map<int, int> cnts;
    for (int i = 0; i < n; i++)
    {
        cnts[counts[i]]++;
    }
    vi v;
    for (auto i : cnts)
    {
        v.pb(i.se);
    }
    sort(all(v));
    if (v.size() == 3)
    {
        cout << v[1] << " " << v[2] / v[1];
    }
    else
        cout << v[0] - 1 << " " << v[1] / (v[0] - 1);

    cout << endl;
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