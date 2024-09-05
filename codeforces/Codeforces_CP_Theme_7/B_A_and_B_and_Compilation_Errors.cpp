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
    vi a(n);
    vi b(n - 1);
    vi c(n - 2);
    for (int &i : a)
        cin >> i;
    for (int &i : b)
        cin >> i;
    for (int &i : c)
        cin >> i;

    map<int, int> m3, m2, m1;

    for (int i = 0; i < n - 1; i++)
    {

        m2[b[i]]++;
    }
    for (int i = 0; i < n - 2; i++)
    {
        m3[c[i]]++;
    }
    vi ans;
    for (int i = 0; i < n - 1; i++)
    {
        if (m3[b[i]]-- == 0)
        {
            ans.pb(b[i]);
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (m2[a[i]]-- == 0)
        {
            ans.pb(a[i]);
            break;
        }
    }
    cout << ans[1] << endl
         << ans[0];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // int t;
    // cin >> t;
    // while (t--)
    solve();
}