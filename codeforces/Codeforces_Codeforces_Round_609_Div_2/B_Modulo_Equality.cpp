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
// Super is the cutest girl
void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[n];
    map<int, int> m2;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        m2[b[i]]++;
    }
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(((b[0] - a[i]) + m) % m);
    }
    int mini = m - 1;
    for (auto i : s)
    {
        bool can = true;
        map<int, int> nums;
        for (int j = 0; j < n; j++)
        {
            nums[(a[j] + i) % m]++;
        }
        for (auto j : nums)
        {
            if (j.se != m2[j.fi])
            {
                can = false;
                break;
            }
        }
        if (can)
            mini = min(mini, i);
    }
    cout << mini;
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