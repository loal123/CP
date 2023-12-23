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
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    ll n, m, k, a, b;
    cin >> n >> m >> k >> a >> b;
    ll money = n / m;
    ll idk = 0;
    idk = b / k;
    while (idk * k * 2 > a)
    {
        idk--;
    }
    if (idk + idk * 2 >= money)
    {
        while (idk + idk * 2 > money)
        {
            idk--;
        }
        cout << idk + idk * 2;
    }
    else
    {
        cout << idk + idk * 2;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t; cin >> t; while(t--)
    solve();
}