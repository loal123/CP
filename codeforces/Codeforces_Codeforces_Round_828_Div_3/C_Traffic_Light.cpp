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
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    vi v;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'g')
            v.pb(i);
    }
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == c)
        {
            int yeah = lower_bound(all(v), i) - v.begin();
            if (yeah == SZ(v))
            {
                int bruh = n - (i - v[0]);

                maxi = max(maxi, bruh);
            }
            else if (yeah == 0)
            {
                int bruh = v[0] - i;
                maxi = max(maxi, bruh);
            }
            else
            {
                int bruh = v[yeah] - i;
                maxi = max(maxi, bruh);
            }
        }
    }
    cout << maxi << '\n';
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