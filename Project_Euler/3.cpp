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
ll prime(ll n)
{
    for (ll i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return -1;

    return n;
}
void solve()
{
    ll x = 600851475143;
    ll maxi = 0;
    for (ll i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
            maxi = max(maxi, prime(i));
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