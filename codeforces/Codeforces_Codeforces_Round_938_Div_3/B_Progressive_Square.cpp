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
void dfs(int i, int j)
{
}
void solve()
{
    int n, c, d;
    cin >> n >> c >> d;
    map<int, int> counts;

    int b[pow2(n)];
    for (int i = 0; i < pow2(n); i++)
    {
        cin >> b[i];
        counts[b[i]]++;
    }
    sort(b, b + pow2(n));
    int ans = 1;
    counts[b[0]]--;
    vi v;
    int yeah = b[0];
    v.pb(yeah);
    for (int i = 1; i < n; i++)
    {
        if (counts[yeah + c])
        {
            v.pb(yeah + c);
            counts[yeah + c]--;
            yeah += c;
        }
        else
        {
            cout << "NO\n";
            return;
        }
    }
    for (auto i : v)
    {
        int xd = i;
        for (int j = 1; j < n; j++)
        {
            if (counts[xd + d])
            {

                counts[xd + d]--;
                xd += d;
            }
            else
            {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
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