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
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    vi v1;
    vi v2;
    int n, p;
    cin >> n >> p;
    for (int i = 0; i < p; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x == 1)
            v1.pb(y);
        else
            v2.pb(y);
    }
    sort(v1.begin(), v1.end());

    sort(v2.begin(), v2.end());
    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        bool on = false;
        int x, y;
        cin >> x >> y;
        int idk = max(x, y);

        int bt1 = v1.end() - lower_bound(v1.begin(), v1.end(), idk);
        int bt2 = upper_bound(v2.begin(), v2.end(), min(x, y)) - v2.begin();

        int yeah = bt1 + bt2;

        if (yeah % 2 == 0)
            cout << 0;
        else
            cout << 1;

        cout << '\n';
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