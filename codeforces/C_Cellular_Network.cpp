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
int n, m;
bool checks(ll x, vi a, vi b)
{

    int i = 0;
    int j = 0;
    while (i < n)
    {
        if (abs(a[i] - b[j]) > x)
        {
            j++;
        }
        else
            i++;

        if (j == m)
            return false;
    }

    return true;
}
void solve()
{

    cin >> n >> m;
    vi a(n);
    vi b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    ll x = 0, y = 1e18;
    while (x < y)
    {
        ll mid = (x + y) / 2;

        if (checks(mid, a, b))
        {
            y = mid;
        }
        else
            x = mid + 1;
    }
    cout << x;
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