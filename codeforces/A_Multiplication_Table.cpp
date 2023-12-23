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
    ll n, x;
    cin >> n >> x;
    int total = 0;
    for (int i = 1; i <= n; i++)
    {
        if (x % i == 0 && i * n >= x)
        {
            total++;
        }
    }
    cout << total;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}