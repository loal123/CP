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
const int maxn = 505;
char z[maxn][maxn];
map<char, pii> m;
int h, w, n;
int counts = 0;

string s;
void dfs(int i, int j, int idx)
{
    if (i < 0 || i >= h || j < 0 || j >= w)
        return;
    if (z[i][j] == '#')
        return;

    if (idx == n)
    {
        counts++;
        return;
    }
    int x = m[s[idx]].fi;
    int y = m[s[idx]].se;
    dfs(i + x, j + y, idx + 1);
}

void solve()
{

    cin >> h >> w >> n;
    cin >> s;
    m['L'] = {0, -1};
    m['R'] = {0, 1};
    m['U'] = {-1, 0};
    m['D'] = {1, 0};
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> z[i][j];
        }
    }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            dfs(i, j, 0);
        }
    }

    cout << counts;
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