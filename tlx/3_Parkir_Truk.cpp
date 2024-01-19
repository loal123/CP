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
    int a, b, c;
    cin >> a >> b >> c;
    int x[3];
    int y[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> x[i] >> y[i];
    }
    int ans = 0;
    int rn = 0;
    while (rn < 102)
    {
        int counts = 0;
        for (int i = 0; i < 3; i++)
        {
            if (rn >= x[i] && rn < y[i])
                counts++;
        }
        if (counts == 1)
            ans += a;
        else if (counts == 2)
            ans += 2 * b;
        else if (counts == 3)
            ans += 3 * c;

        rn++;
    }
    cout << ans;
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