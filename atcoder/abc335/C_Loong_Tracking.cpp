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
// Super is a cute girl
void solve()
{
    int n, q;
    cin >> n >> q;

    vector<pii> v;
    for (int i = 1; i <= n; i++)
    {
        v.pb(mp(i, 0));
    }
    vector<pii> stupid;

    int x = 1, y = 0;
    int counts = 0;
    while (q--)
    {
        int p;
        cin >> p;
        if (p == 1)
        {

            char k;
            cin >> k;
            if (k == 'U')
                y++;
            else if (k == 'D')
                y--;
            else if (k == 'L')
                x--;
            else
                x++;

            stupid.pb(mp(x, y));

            counts++;
        }
        else
        {
            int m;
            cin >> m;
            if (m - counts >= 1)
            {
                cout << v[m - counts - 1].fi << " " << v[m - counts - 1].se << '\n';
            }
            else
            {
                int real = counts;
                real -= m;

                cout << stupid[real].fi << " " << stupid[real].se << '\n';
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // int t; cin >> t; while(t--)
    solve();
}