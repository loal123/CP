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
long long calculate(long long p,
                    long long q)
{
    long long m = mod, expo;
    expo = m - 2;

    // Loop to find the value
    // until the expo is not zero
    while (expo)
    {

        // Multiply p with q
        // if expo is odd
        if (expo & 1)
        {
            p = (p * q) % m;
        }
        q = (q * q) % m;

        // Reduce the value of
        // expo by 2
        expo >>= 1;
    }
    return p;
}
void solve()
{
    int n;
    cin >> n;
    vi a(8), b(4);
    for (int i = 0; i < 8; i++)
    {
        cin >> a[i];
    }
    ll curr = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> b[i];
        curr += b[i];
    }
    cout << calculate(curr, 4);
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