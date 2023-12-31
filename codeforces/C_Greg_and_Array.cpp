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
    ll n, m, k;
    cin >> n >> m >> k;
    ll a[n + 2];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ll diff[m + 2] = {0};
    int left[m + 2], right[m + 2], increase[m + 2];
    for (int i = 1; i <= m; i++)
    {
        cin >> left[i] >> right[i] >> increase[i];
    }
    for (int i = 1; i <= k; i++)
    {
        int x, y;
        cin >> x >> y;

        diff[x]++;
        diff[y + 1]--;
    }
    ll q[n + 2] = {0};

    for (int i = 1; i <= m; i++)
    {
        diff[i] += diff[i - 1];

        q[left[i]] += increase[i] * diff[i];
        q[right[i] + 1] -= increase[i] * diff[i];
    }

    for (int i = 1; i <= n; i++)
    {
        q[i] += q[i - 1];
        cout << a[i] + q[i] << " ";
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