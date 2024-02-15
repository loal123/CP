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
vector<string> v;
void bin(int n, string s)
{
    if (SZ(s) == n)
        v.pb(s);
    else
    {
        bin(n, s + '1');
        bin(n, s + '0');
    }
}
void solve()
{
    int n, m, q;
    cin >> n >> m >> q;
    int w[n];
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }
    string t[m];
    for (int i = 0; i < m; i++)
    {
        cin >> t[i];
    }
    bin(n, "");

    sort(v.rbegin(), v.rend());
    vi yeah[4097];
    for (auto i : v)
    {
        int counts = 0;
        for (int j = 0; j < n; j++)
        {
        }
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