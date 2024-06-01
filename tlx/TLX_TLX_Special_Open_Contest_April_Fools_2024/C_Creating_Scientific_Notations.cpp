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

    vector<pii> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int l = s[0] - '0';
        int r = s[2] - '0';
        v.pb({l, r});
    }
    vector<bool> have(19, 0);
    have[v[0].se] = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i].fi < v[i - 1].fi + 1 || have[v[i].se])
        {
            cout << "INVALID\n";

            return;
        }
        have[v[i].se] = 1;
    }
    cout << "VALID\n";
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