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
    int a[n];
    int f[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        f[i] = 1e9;
    }
    f[0] = 0;

    for (int i = 0; i < n; i++)
    {
        f[i + 1] = min(f[i] + abs(a[i + 1] - a[i]), f[i + 1]);
        f[i + 2] = min(f[i] + abs(a[i + 2] - a[i]), f[i + 2]);
    }
    cout << f[n - 1];
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