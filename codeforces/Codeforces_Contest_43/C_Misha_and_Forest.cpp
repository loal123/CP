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
    vi deg(n);
    vi x(n);
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        cin >> deg[i] >> x[i];
        if (deg[i] == 1)
        {
            q.push(i);
        }
    }
    vector<pii> ans;
    while (!q.empty())
    {
        int curr = q.front();
        if (deg[curr] == 0)
        {
            q.pop();
            continue;
        }

        ans.pb({curr, x[curr]});
        deg[curr]--;
        x[x[curr]] ^= curr;
        if (--deg[x[curr]] == 1)
        {
            q.push(x[curr]);
        }
        q.pop();
    }
    cout << SZ(ans) << '\n';
    for (auto i : ans)
        cout << i.fi << " " << i.se << '\n';
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