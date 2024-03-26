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
vector<vector<int>> need;
vector<bool> vis;
vi actualcost;
int checkp(int idx)
{
    if (vis[idx])
        return actualcost[idx];
    int counts = 0;
    vis[idx] = 1;
    if (need[idx].size() == 0)
    {
        return actualcost[idx];
    }
    for (auto i : need[idx])
    {

        counts += checkp(idx);
    }
}
void solve()
{
    int n, k;
    cin >> n >> k;
    need = vector<vector<int>>(n);
    vis = vector<bool>(n, 0);
    actualcost = vi(n);
    int cost[n];
    for (int i = 0; i < n; i++)
    {
        cin >> cost[i];
    }
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        cost[x - 1] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        actualcost[i] = cost[i];
    }

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        for (int j = 0; j < x; j++)
        {
            int y;
            cin >> y;
            need[i].pb(y);
        }
    }
    for (int i = 0; i < n; i++)
    {
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