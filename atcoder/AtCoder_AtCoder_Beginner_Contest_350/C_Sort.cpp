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
    vi v(n + 1);
    vector<pii> ans;
    map<int, int> pos;
    for (int i = 1; i <= n; i++)
    {
        int x;

        cin >> x;
        v[i] = x;
        pos[x] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        if (pos[i] != i)
        {
            int x = pos[i];
            int y = i;
            if (x > y)
                swap(x, y);

            ans.pb({x, y});

            pos[v[i]] = pos[i];

            pos[i] = i;
            swap(v[x], v[y]);
        }
    }
    cout << SZ(ans) << endl;

    for (auto i : ans)
    {
        cout << i.fi << " " << i.se << endl;
    }
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