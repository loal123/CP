#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pb push_back
const int maxn = 2e5 + 5;
vector<pair<int, int>> adj[maxn];
vector<bool> vis(maxn, 0);
const int maxn = 2e5 + 5;

void dfs(int node)
{
    for (auto i : adj[node])
    {
        }
}
int main()
{
    int n, m;
    cin >> n >> m;
    vi c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        adj[--a].pb({--b, w});
    }
}