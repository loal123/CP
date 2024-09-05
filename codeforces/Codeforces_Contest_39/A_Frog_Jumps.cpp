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
    string s;
    cin >> s;
    vi pos;
    int n = SZ(s);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R')
            pos.pb(i);
    }
    pos.pb(n);
    int mini = 1;
    while (mini <= n)
    {
        if (s[mini - 1] == 'R')
            break;
        mini++;
    }
    int curr = mini - 1;
    while (1)
    {
        if (curr + mini >= n)
            break;
        int xd = upper_bound(all(pos), curr + mini) - pos.begin();
        if (pos[xd - 1] > curr)
            curr = pos[xd - 1];

        else
        {
            mini = pos[xd] - curr;
            curr += mini;
        }
    }
    cout << mini << '\n';
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