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
    int n, k, m;
    cin >> n >> k >> m;
    string s;
    cin >> s;
    bool found[k];
    memset(found, 0, sizeof(found));
    int counts = 0;
    string res = "";
    for (auto c : s)
    {
        if (SZ(res) == n)
            break;

        counts += (!found[c - 'a']);
        found[c - 'a'] = true;
        if (counts == k)
        {
            memset(found, 0, sizeof(found));
            counts = 0;
            res += c;
        }
    }
    if (SZ(res) == n)
        cout << "YES\n";
    else
    {
        cout << "No\n";
        for (int i = 0; i < k; i++)
        {
            if (!found[i])
            {
                while (SZ(res) < n)
                {
                    res += (char)('a' + i);
                }
            }
        }
        cout << res << '\n';
    }
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