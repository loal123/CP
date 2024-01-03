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
// Super is a cute girl
void solve()
{
    ll n, k, q;
    cin >> n >> k >> q;
    ll left[n + 2];
    ll right[n + 2];
    int a[200001] = {0};
    for (int i = 1; i <= n; i++)
    {
        int x, y;
        cin >> x >> y;
        a[x]++;
        a[y + 1]--;
    }
    for (int i = 1; i < 200001; i++)
    {
        a[i] += a[i - 1];
    }
    int b[200001] = {0};
    int counts = 0;
    for (int i = 1; i < 200001; i++)
    {
        if (a[i] >= k)
            counts++;
        b[i] = counts;
    }
    for (int i = 0; i < q; i++)
    {
        int x, y;
        cin >> x >> y;
        cout << b[y] - b[x - 1] << '\n';
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