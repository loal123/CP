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
    int n, m;
    cin >> n >> m;
    vector<pll> ans(n + 1);
    vi stuff;
    for (int i = 0; i < n; i++)
    {
        int curr;
        for (int j = 0; j < (1 << i); j++)
        {
            int x;
            cin >> x;
            curr = x;
        }
        stuff.pb(curr);
    }
    reverse(all(stuff));
    int currl = 0, currr = 0;
    int l = 1, r = (1 << n);
    ans[0] = {l, r};
    for (int i = 0; i < n; i++)
    {
        if (stuff[i] == 1)
        {
            l += (1 << currl);
            currl++;
        }
        else
        {
            r -= (1 << currr);
            currr++;
        }
        ans[i + 1] = {l, r};
    }
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        b--;
        if (a >= ans[b].fi && a <= ans[b].se)
            cout << "Yes\n";
        else
            cout << "No\n";
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