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
    vi dp(n + 1, 0);
    int pref[n][31];
    memset(pref, 0, sizeof(pref));
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        ans |= v[i];
        cout << ans << " ";
    }
    cout << endl;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {

            int ans = 0;
            for (int k = i; k <= j; k++)
            {
                ans |= v[k];
            }

            s.insert(ans);
        }
    }
    cout << SZ(s);
    // dp counting (?) :vomit:
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