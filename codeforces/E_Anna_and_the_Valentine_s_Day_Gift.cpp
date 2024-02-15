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
    int n, m;
    cin >> n >> m;
    int a[n];
    vi v;
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        string z = to_string(a[i]);
        int zero = 0;
        int sizes = z.size();
        total += sizes;
        for (int j = sizes - 1; j >= 0; j--)
        {
            if (z[j] != '0')
                break;
            zero++;
        }
        v.pb(zero);
    }
    int counts = 0;
    sort(all(v));
    for (int i = SZ(v) - 1; i >= 0; i -= 2)
    {
        counts += v[i];
    }
    total -= counts;

    if (total >= m + 1)
        cout << "Sasha";
    else
        cout << "Anna";

    cout << '\n';
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