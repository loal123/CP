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
    int n, k;
    cin >> n >> k;
    ll a[n];
    vl v(n);
    vl powers;
    int powercount = 0;
    while ((ll)pow(k, powercount) <= 1e16)
    {
        powers.pb((ll)pow(k, powercount));
        powercount++;
    }
    vector<bool> has;
    for (int i = 0; i <= powercount; i++)
    {
        has.pb(false);
    }
    bool can = true;
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
        int bruh = powercount;
        while (a[i] > 0 && bruh > 0)
        {
            if (a[i] - powers[bruh - 1] >= 0)
            {
                if (!has[bruh - 1])
                {
                    has[bruh - 1] = true;
                    a[i] -= powers[bruh - 1];
                }
            }
            bruh--;
        }
        if (a[i] != 0)
            can = false;
    }
    cout << (can ? "YES" : "NO") << '\n';
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