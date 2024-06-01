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
    ll n, k, x;
    cin >> n >> k >> x;

    vl a(n);
    vl b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    ll liters = 0;
    ll prize = 0;
    ll max_prize = 0;
    int l = lower_bound(all(a), x) - a.begin();
    int currently = l;
    ll r = l;
    for (l; l >= 0; l--)
    {
        if (l == currently)
        {
            liters += currently - a[l];
        }
        else
        {
            liters += a[l + 1] - a[l];
        }
        if (liters > k)
        {
            l++;
            liters -= a[l + 1] - a[l];
            break;
        }

        prize += b[l];
        max_prize = prize;
    }
    liters = 0;
    for (l; l < n; l++)
    {
        while (r < n)
        {
            if (a[l] < currently)
            {
                liters = (currently - a[l]) * 2;
            }
            if (liters + (a[r] - currently) > k)
                break;
            liters += a[r] - currently;

            prize += b[r];
        }
        max_prize = max(max_prize, prize);

        if (a[l] > currently)
        {
            
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