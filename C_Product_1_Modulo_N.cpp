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
#define all(v) (v.begin(), v.end())
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    int n;
    cin >> n;
    vi v;
    ll counts = 1;
    for (int i = 1; i < n; i++)
    {
        if (gcd(n, i) == 1)
        {
            v.pb(i);
            counts *= i;
            counts %= n;
        }
    }
    if (counts % n == 1)
    {
        cout << v.size() << '\n';
        for (auto i : v)
            cout << i << ' ';
    }
    else
    {
        cout << v.size() - 1 << '\n';
        for (auto i : v)
            if (i != counts % n)
                cout << i << ' ';
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