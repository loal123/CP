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
const int maxn = 205;
int n;
vector<vector<bool>> connected;

int x[maxn], y[maxn], w[maxn];
vector<bool> visited;
int dfs(int s)
{
    visited[s] = true;
    int reachable = 1;

    for (int i = 0; i < n; i++)
    {
        if (!visited[i] && connected[s][i])
        {
            visited[i] = true;
            reachable += dfs(i);
        }
    }
    return reachable;
}

// Super is a cute girl
void solve()
{

    cin >> n;

    int maximum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i] >> w[i];
    }
    connected = vector<vector<bool>>(n, vector<bool>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            connected[i][j] = w[i] >= (hypot(x[i] - x[j], y[i] - y[j]));
        }
    }
    for (int i = 0; i < n; i++)
    {
        visited.assign(n, false);
        maximum = max(maximum, dfs(i));
    }

    cout << maximum;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("moocast.in", "r", stdin);
    freopen("moocast.out", "w", stdout);
    // int t; cin >> t; while(t--)
    solve();
}