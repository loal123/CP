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
    ll n, m, mons;
    cin >> n >> m >> mons;
    ll ans = 0;
    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        ll curr = v[i];
        int l = i, r = i;
        ll toilets = 1;
        ll money = mons;
        while (money >= 0)
        {
            bool moved = 0;
            if (l > 0 && r < n - 1)
            {
                ll moveleft = curr - v[l - 1];
                ll moveright = v[r + 1] - curr;
                if (min(moveleft, moveright) > money)
                    break;
                toilets++;
                if (moveleft < moveright)
                {
                    l--;
                    money -= moveleft;
                }
                else
                {
                    r++;
                    money -= moveright;
                }
            }
            else if (l > 0)
            {
                ll move = curr - v[l - 1];
                if (move > money)
                    break;
                toilets++;
                l--;
                money -= move;
            }
            else if (r < n - 1)
            {
                ll move = v[r + 1] - curr;
                if (move > money)
                    break;
                toilets++;
                r++;
                money -= move;
            }
            else
                break;
        }
        ans = max(ans, toilets);
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