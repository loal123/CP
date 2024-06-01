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
    int n, m;
    cin >> n >> m;
    int counts[m][26];
    memset(counts, 0, sizeof(counts));

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            counts[j][s[j] - 'A']++;
        }
    }
    vi v(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        int maxi = 0;
        for (int j = 0; j < 26; j++)
        {
            maxi = max(maxi, counts[i][j]);
        }
        ans += maxi * v[i];
    }
    cout << ans;
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