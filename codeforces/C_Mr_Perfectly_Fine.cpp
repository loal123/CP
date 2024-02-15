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
    vi a;
    vi b;
    vi c;
    for (int i = 0; i < n; i++)
    {
        int m;
        string s;
        cin >> m >> s;
        if (s == "01")
            a.pb(m);
        else if (s == "10")
            b.pb(m);
        else if (s == "11")
            c.pb(m);
    }
    bool can = false;
    int mini = INF;

    if (a.size() && b.size())
    {
        can = true;
        sort(all(a));
        sort(all(b));
        mini = min(mini, a[0] + b[0]);
    }
    if (c.size())
    {
        can = true;
        sort(all(c));
        mini = min(c[0], mini);
    }
    cout << (can ? mini : -1) << endl;
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