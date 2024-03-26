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
    int n;
    string s;
    cin >> n >> s;

    bool have[n];
    memset(have, 0, sizeof(have));
    int ans = 0;
    for (int j = 2; j < n; j++)
    {
        string yeah = s.substr(j - 2, 3);
        if (yeah == "map" || yeah == "pie")
        {
            if (have[j - 2] || have[j - 1] || have[j])
            {
                continue;
            }
            else
                ans++;
            for (int i = j - 2; i <= j; i++)
            {
                have[i] = 1;
            }
        }
    }
    cout << ans << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--)
        solve();
}