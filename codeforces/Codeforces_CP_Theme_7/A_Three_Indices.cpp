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

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 1; i < n - 1; i++)
    {
        int x = v[i];
        int l;
        int r;
        bool has = false;
        bool hasr = false;
        for (int j = i - 1; j >= 0; j--)
        {
            if (v[j] < v[i])
            {
                has = true;
                l = j;
                break;
            }
        }
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] > v[j])
            {
                hasr = true;
                r = j;
                break;
            }
        }
        if (has && hasr)
        {
            cout << "YES\n";
            cout << l + 1 << " " << i + 1 << ' ' << r + 1 << endl;
            return;
        }
    }
    cout << "NO\n";
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