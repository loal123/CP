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
int n, m;
bool compare(pair<string, int> a, pair<string, int> b)
{
    for (int i = 0; i < m; i++)
    {
        if (i & 1)
        {
            if (a.fi[i] > b.fi[i])
                return true;
            else if (a.fi[i] < b.fi[i])
                return false;
        }
        else
        {
            if (a.fi[i] < b.fi[i])
                return true;
            else if (a.fi[i] > b.fi[i])
                return false;
        }
    }
}
void solve()
{

    cin >> n >> m;
    vector<pair<string, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].fi;
        v[i].se = i + 1;
    }
    sort(all(v), compare);
    for (int i = 0; i < n; i++)
    {
        cout << v[i].se << " ";
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