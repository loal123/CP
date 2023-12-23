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
    ll n, k;
    cin >> n >> k;
    ll a = 0, b = 1e9;
    ll minx = 1e18;
    while (a != b)
    {
        ll mid = (a + b) / 2;
        ll counts = mid;
        for (int i = 1; i < 100; i++)
        {
            int c = pow(k, i);
            if (mid / c == 0)
                break;
            counts += mid / c;
        }
        if (counts >= n)
        {
            minx = min(mid, minx);
            b = mid;
        }
        else
        {
            a = mid + 1;
        }
    }
    cout << minx;
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