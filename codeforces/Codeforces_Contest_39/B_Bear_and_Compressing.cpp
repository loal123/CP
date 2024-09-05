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
// recursion hell
int n, q;
vector<string> s;
vector<pair<string, char>> ops;
set<string> ans;
void insertlist(string curr)
{
    if (SZ(curr) == n)
    {
        s.pb(curr);
        return;
    }

    for (char c = 'a'; c <= 'f'; c++)
    {
        insertlist(curr + c);
    }
}
void searchall(string curr, string ori)
{
    if (SZ(curr) == 1)
    {
        if (curr == "a")
        {

            ans.insert(ori);
        }
        return;
    }

    for (auto i : ops)
    {

        int sz = SZ(curr);

        string xd = curr;
        if (i.fi[0] == xd[0] && i.fi[1] == xd[1])
        {
            string yeah = "";
            yeah += i.se;
            xd.replace(0, 2, yeah);

            searchall(xd, ori);
        }
    }
}

void solve()
{

    cin >> n >> q;
    while (q--)
    {
        string a;
        char b;
        cin >> a >> b;
        ops.pb({a, b});
    }
    insertlist("");
    for (auto i : s)
    {
        searchall(i, i);
    }
    cout << SZ(ans);
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