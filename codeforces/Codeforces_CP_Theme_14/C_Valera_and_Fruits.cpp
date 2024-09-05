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
    map<int, int> m;
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        m[a] += b;
    }
    int curr = 0;
    for (int i = 1; i <= 3001; i++)
    {
        int can = k;
        if (m[i - 1] >= k)
        {
            curr += k;
            continue;
        }
        can -= m[i - 1];
        curr += m[i - 1];
        curr += min(m[i], can);
        m[i] -= min(m[i], can);
    }
    cout << curr;
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