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
    string s1, s2;
    cin >> s1 >> s2;

    int ans = 0;

    vector<bool> xd(n, 0);
    for (int i = 0; i < n; i++)
    {
        bool could = 0;
        if (s2[i] == '1')
        {
            if (s1[i] == '0')
                could = 1;
            if (i > 0 && could == 0)
            {
                if (s1[i - 1] == '1' && !xd[i - 1])
                {
                    could = 1;
                    xd[i - 1] = 1;
                }
            }
            if (i < n - 1 && could == 0)
            {
                if (s1[i + 1] == '1' && !xd[i + 1])
                {
                    could = 1;
                    xd[i + 1] = 1;
                }
            }
        }
        ans += could;
    }
    cout << ans << endl;
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