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
    ll k, x, a;
    cin >> k >> x >> a;
    ll curr = 0;
    ll pos = 1;
    for (int i = 1; i <= x + 1; i++)
    {

        if (curr + pos >= pos * k)
        {
            int x = pos;
            int b = a;

            while (x < b)
            {
                ll mid = (x + b) / 2;
                if (curr + mid >= mid * k)
                {
                    x = mid + 1;
                }
                else
                    b = mid;
            }
            pos = x;
        }
        curr += pos;
    }

    if (curr <= a)
        cout << "YES\n";
    else
        cout << "NO\n";
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