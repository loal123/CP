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
void solve()
{
    int n;
    cin >> n;
    vi v(n);
    for (int &i : v)
        cin >> i;

    // now we find how much it takes for each index, its guaranteed to be less than n ig
    int pos;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == n)
        {
            pos = i % 2;
        }
    }
    vector<pii> odd;
    vector<pii> even;

    for (int i = 0; i < n; i++)
    {
        if (i & 1)
        {
            even.pb({v[i], i});
        }
    }

    // 2 2
    //
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