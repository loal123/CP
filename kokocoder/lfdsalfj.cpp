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
const int maxn = 1e5 + 5;
set<ll> adj[maxn];
bool vis[maxn];
// Super is the cutest girl

void solve()
{
    int n, k;
    cin >> n >> k;
    vl v(n);
    vl b(k);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < k; i++)
    {
        cin >> b[i];
        b[i]--;
    }
    for (int i = 0; i < n; i++)
    {
        if (i < (i + 1) % n)
            adj[i].insert((i + 1) % n);
        else
            adj[(i + 1) % n].insert(i);
    }
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j != b[i])
            {
                if (b[i] < j)
                    adj[b[i]].insert(j);
                else
                    adj[j].insert(b[i]);
            }
        }
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (auto j : adj[i])
        {
            ans += (ll)v[i] * v[j];
        }
    }
    cout << ans;
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