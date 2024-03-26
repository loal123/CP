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

    int n, h, m;
    cin >> n >> h >> m;
    int hmini = 25;
    int mmini = 61;
    for (int i = 0; i < n; i++)
    {
        int x = h, y = m;
        int a, b;
        cin >> a >> b;
        int hcounts = 0, mcounts = 0;

        while (x != a && y != b)
        {

            x %= 24;
            mcounts++;
            y++;
            if (mcounts == 60)
            {
                mcounts = 0;
                hcounts++;
            }
            if (y == 60)
            {
                y = 0;
                x++;
            }
        }
        if (hcounts < hmini)
        {
            hmini = hcounts;
            mmini = mcounts;
        }
        else if (hcounts == hmini)
        {
            mmini = min(mmini, mcounts);
        }
    }
    cout << hmini << " " << mmini << '\n';
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