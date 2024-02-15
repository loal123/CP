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
    cin >> n;
    int a[n];
    int counts = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        counts += a[i];
    }
    bool has = true;
    int curr = 0;
    counts /= n;
    bool can = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < counts)
        {
            if (curr + a[i] < counts)
            {
                can = false;
                break;
            }
            else
            {
                curr -= counts - a[i];
                a[i] = counts;
            }
        }
        else
        {
            curr += a[i] - counts;
        }
    }
    cout << (can ? "YES" : "NO") << endl;
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