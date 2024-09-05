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
int depth[105];
int a[105];
void f(int l, int r, int curr)
{
    if (l > r)
        return;
    int maxi = 0;
    int pos;
    for (int i = l; i <= r; i++)
    {
        if (a[i] > maxi)
        {
            maxi = a[i];
            pos = i;
        }
    }
    depth[maxi] = curr;
    f(l, pos - 1, curr + 1);
    f(pos + 1, r, curr + 1);
}
void solve()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    f(0, n - 1, 0);
    for (int i = 0; i < n; i++)
    {
        cout << depth[a[i]] << " ";
    }
    cout << '\n';
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