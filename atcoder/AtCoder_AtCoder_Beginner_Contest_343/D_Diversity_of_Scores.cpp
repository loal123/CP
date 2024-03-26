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
void solve()
{
    int n, t;
    cin >> n >> t;
    vl v(n, 0);
    map<ll, int> m;
    m[0] = n;
    int ans = 1;
    while (t--)
    {
        int a;
        ll b;
        cin >> a >> b;
        a--;
        m[v[a]]--;
        if (m[v[a]] == 0)
            ans--;
        v[a] += b;
        m[v[a]]++;
        if (m[v[a]] == 1)
            ans++;

        cout << ans << '\n';
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