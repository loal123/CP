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
    map<char, pii> m;
    m['U'] = {0, -1};
    m['D'] = {0, 1};
    m['L'] = {-1, 0};
    m['R'] = {1, 0};
    int has[300][300];
    memset(has, 0, sizeof(has));
    has[150][150] = 1;
    has[149][150] = 2;
    has[151][150] = 2;
    has[150][149] = 2;
    has[150][151] = 2;
    int currx = 150, curry = 150;

    string s;
    cin >> s;
    for (auto i : s)
    {
        int curr = has[currx][curry];
        for (auto i : m)
        {
            if (has[currx + i.se.fi][curry + i.se.se] == 0)
                has[currx + i.se.fi][curry + i.se.se] = curr + 1;
        }
        currx += m[i].fi;
        curry += m[i].se;
        if (has[currx][curry] != curr + 1)
        {
            cout << "BUG\n";
            return;
        }
        has[currx][curry] = curr + 1;
    }
    cout << "OK\n";
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