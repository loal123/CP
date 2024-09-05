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
vector<pii> can;
void precompute()
{

    for (int i = 2; i <= 30000; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (i > j && i <= 10000)
                can.pb({i, i - j});
            if (i % 2 == 0 && i / 2 > j && i / 2 <= 10000)
                can.pb({i / 2, i - j});
            if (i % 3 == 0 && i / 3 > j && i / 3 <= 10000)
                can.pb({i / 3, i - j});
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    string xd = to_string(n);
    int sz = SZ(xd);

    set<pii> ans;
    for (auto i : can)
    {

        int left = i.fi * n - i.se;
        string te = to_string(left);
        int k = SZ(te);
        if (i.fi * sz - i.se != k)
            continue;

        string yeah = "";
        for (int i = 0; i < 7; i++)
        {
            yeah += xd;
        }
        string real = yeah.substr(0, k);
        int other = stoi(real);
        if (left == other)
            ans.insert({i.fi, i.se});
    }
    cout << SZ(ans) << '\n';
    for (auto i : ans)
        cout << i.fi << " " << i.se << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    precompute();
    int t;
    cin >> t;
    while (t--)
        solve();
}