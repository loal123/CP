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
    ll n;
    cin >> n;
    vl v;
    vl squaree;
    for (ll i = 2; i < 1e6; i++)
    {
        squaree.pb(pow2(i));
    }
    ll maxi = -1;
    for (ll i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            bool can = true;
            for (int j = 2; pow2(j) <= (i); j++)
            {
                if (i % pow2(j) == 0)
                {
                    can = false;
                    break;
                }
            }
            if (can)
                maxi = max(maxi, i);
            v.pb(i);
        }
    }
    for (auto i : v)
    {

        bool can = true;
        for (int j = 2; pow2(j) <= (n / i); j++)
        {
            if ((ll)(n / i) % pow2(j) == 0)
            {
                can = false;
                break;
            }
        }
        if (can)
            maxi = max(maxi, n / i);
    }
    cout << maxi;
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