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

    ll n;
    cin >> n;

    map<ll, int> primes;
    ll x = n;
    for (ll i = 2; (ll)i * i <= n; i++)
    {
        while (x % i == 0)
        {
            x /= i;
            primes[i]++;
        }
    }
    if (x > 1)
        primes[x]++;

    ll most;
    ll cnt = 0;

    for (auto i : primes)
    {
        if (i.se > cnt)
        {
            cnt = i.se;
            most = i.fi;
        }
    }
    cout << cnt << endl;
    for (int i = 0; i < cnt - 1; i++)
    {
        cout << most << " ";
    }
    primes[most] -= cnt - 1;

    ll last = 1;
    for (auto i : primes)
    {

        while (i.se--)
            last *= i.fi;
    }

    cout << last << '\n';
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