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
    int fib[100];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < 100; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        if (fib[i] > 4e6)
            break;
    }
    ll counts = 0;
    for (int i = 0; fib[i] <= 4e6; i++)
    {
        counts += (!(fib[i] & 1) ? fib[i] : 0);
    }

    cout << counts;
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