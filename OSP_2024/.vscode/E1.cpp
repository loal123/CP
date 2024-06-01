#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pb push_back
const ll INFF = 1e18 + 5;
const int maxn = 1e5 + 5;
vi adj[maxn];
vector<vi> stuff;
vi temp;
vector<bool> vis(maxn, 0);
vi a(maxn);
vi b(maxn);
void dfs(int s)
{
    if (vis[s])
        return;

    vis[s] = 1;
    temp.pb(a[s]);
    for (auto i : adj[s])
    {
        dfs(i);
    }
}
int main()
{
    ll n, m, k;
    cin >> n >> m >> k;

    sort(b.begin(), b.end());
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[--x].pb(--y);
        adj[y].pb(x);
    }
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            temp.clear();
            dfs(i);
            stuff.pb(temp);
        }
    }

    ll ans = 0;
    for (auto i : stuff)
    {
        sort(i.begin(), i.end());

        int sz = i.size();
        bool has = 0;
        ll mini = INFF;
        for (int j = 0; j < m; j++)
        {
            ll val = 0;
            for (auto k : i)
            {
                val += abs(k - b[j]);
            }
            mini = min(val, mini);
        }
        ans += mini;
    }
    cout << ans;
    /*
    8 4 6
    10 20 30 40 50 60 70 80
    30 40 50 60
    1 8
    2 7
    3 5
    3 6
    5 6
    6 8

    4 3 0
    1 2 13 14
    20 10 20
    */
}