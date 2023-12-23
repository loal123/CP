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
vi v;
void precomp()
{
    for (int i = 1; i <= 100000; i++)
    {
        bool can = true;
        string bruh = to_string(i);

        if (i % 10 != 3 && i % 3 != 0)
            v.pb(i);
    }
}
// Super is a cute girl
void solve()
{

    int k;
    cin >> k;
    cout << v[k - 1] << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    precomp();
    int t;
    cin >> t;
    while (t--)
        solve();
}
// 10 01