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
    int st[26][n + 2];
    int mini = INF;
    int maxi = -INF;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mini = min(v[i], mini);
        maxi = max(v[i], maxi);
        st[0][i] = v[i];
    }
    for (int i = 1; i <= 25; i++)
    {
        for (int j = 0; j + (1 << i) <= n; j++)
        {
            st[i][j] = min(st[i - 1][j], st[i - 1][j + (1 << (i - 1))]);
        }
    }
    if (k == 1)
    {
        cout << mini;
    }
    else if (k == 2)
    {
        int ans = -INF;
        for (int segment = 0; segment < n - 1; segment++)
        {
            int i = __lg(segment + 1);
            int min1 = st[i][0], st[i][segment - (1 << i) + 1];
            int j = __lg(n - segment + 1);
            
        }
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