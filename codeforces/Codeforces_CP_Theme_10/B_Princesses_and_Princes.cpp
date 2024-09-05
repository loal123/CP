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
vector<vi> adj;
vector<bool> vis;
void solve()
{
    int n;
    cin >> n;
    adj = vector<vi>(n);

    vis = vector<bool>(n);

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        while (k--)
        {
            int b;
            cin >> b;
            adj[i].pb(b - 1);
        }
    }

    set<int> princess;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        for (auto j : adj[i])
        {
            if (!vis[j])
            {
                cnt++;
                vis[j] = 1;
                princess.insert(i);
                break;
            }
        }
    }

    if (cnt == n)
    {
        cout << "OPTIMAL\n";
    }
    else
    {
        int prince;

        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
            {
                prince = i + 1;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (!princess.count(i))
            {
                cout << "IMPROVE\n";
                cout << i + 1 << " " << prince << endl;
                return;
            }
        }
    }
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