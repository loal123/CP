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
    int n, x;
    cin >> n >> x;
    int maxi = -1;
    int a[n];
    vi v;
    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        v.pb(z);
    }
    v.pb(0);

    sort all(v);
    for (int i = 0; i < v.size() - 1; i++)
    {
        maxi = max(maxi, abs(v[i] - v[i + 1]));
    }
    maxi = max(maxi, abs(v[v.size() - 1] - x) * 2);
    cout
        << maxi << endl;
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