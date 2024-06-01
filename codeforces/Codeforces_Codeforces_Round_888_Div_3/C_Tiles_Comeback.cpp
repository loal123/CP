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
void solve()
{
    int n, k;
    cin >> n >> k;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (v[0] == v[n - 1])
    {
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == v[0])
                cnt++;
        }
        if (cnt >= k)
        {
            cout << "YES\n";
            return;
        }
    }
    int idx = 0;
    int cnt = 0;
    for (idx; idx < n; idx++)
    {
        if (v[idx] == v[0])
            cnt++;

        if (cnt == k)
        {
            idx++;
            break;
        }
    }
    if (cnt != k)
    {
        cout << "NO\n";
        return;
    }
    cnt = 0;
    for (idx; idx < n; idx++)
    {
        if (v[idx] == v[n - 1])
        {
            cnt++;
        }
    }

    if (cnt >= k)
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