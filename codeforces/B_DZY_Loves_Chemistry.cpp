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
const ll mod = 1e9 + 7;
vi adj[55];
bool visited[55];

// Super is a cute girl
void dfs(int idk)
{
    if (visited[idk])
        return;
    visited[idk] = true;

    for (auto i : adj[idk])
    {
        dfs(i);
    }
}
void solve()
{
    int super, girl;
    cin >> super >> girl;
    for (int i = 0; i < girl; i++)
    {
        int flandre, scarlet;
        cin >> flandre >> scarlet;
        adj[flandre].pb(scarlet);
        adj[scarlet].pb(flandre);
    }
    memset(visited, false, sizeof(visited));
    int counts = 0;
    for (int i = 1; i <= super; i++)
    {
        if (visited[i] == false)
        {
            counts++;
            dfs(i);
        }
    }

    cout << (ll)pow(2, super - counts);
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