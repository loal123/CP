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
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<pii> vodd;
    vector<pii> veven;
    int total = 0;
    for (int i = 1; i <= n; i += 2)
    {
        total += (i + 1) / 2;
        total += n + 1 - i / 2;
        vodd.pb(total,);
    }
    total = 0;
    for (int i = 2; i <= n; i += 2)
    {
    }

    for (int i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
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