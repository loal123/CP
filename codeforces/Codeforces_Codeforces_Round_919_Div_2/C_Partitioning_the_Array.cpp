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
vi primes;
vector<bool> can(500, 0);
void sieve()
{
    for (int i = 2; (i * i) <= 2e5 + 5; i++)
    {
        if (can[i])
            continue;
        primes.pb(i);
        for (int j = i + i; j * j <= 2e5 + 5; j += i)
        {
            can[j] = 1;
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            int bruh = 0;
            for (int j = 0; j + i < n; j++)
            {
                bruh = gcd(bruh, abs(v[i + j] - v[j]));
            }
            if (bruh != 1)
                ans++;
        }
    }
    cout << ans << '\n';
}
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    sieve();
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--)
        solve();
}