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
#define all(v) (v.begin(), v.end())
const int maxn = 1e5 + 5;
vector<pll> adj[maxn];
const ll INF = 1e18;
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    ll b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        adj[i + 1].pb({a[i], b[i]});
    }
    priority_queue<pll> pq;
    int distance[n] = {INF};
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