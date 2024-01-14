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
const int maxn = 1e4 + 5;
// Super is a cute girl
void solve()
{
    int n;
    cin >> n;
    int tree = 0;
    bool vis[n];
    int rel[n];
    for (int i = 0; i < n; i++)
    {
        cin >> rel[i];
        rel[i]--;
        vis[i] = false;
    }
    for (int i = 0; i < n; i++)
    {
        if (!vis[rel[i]])
            tree++;

        int d1 = rel[i];
        int d2 = rel[rel[i]];
        vis[d1] = vis[d2] = true;
    }
    cout << tree;
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