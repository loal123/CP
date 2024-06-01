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

    vector<string> v(n);
    set<int> unq;
    set<int> dls;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vi dl(m);

    for (int i = 0; i < m; i++)
    {
        cin >> dl[i];
        dls.insert(dl[i] - 1);
    }

    for (auto i : dl)
        unq.insert(v[i - 1].size());

    int sz = v[dl[0] - 1].size();

    if (SZ(unq) != 1)
    {
        cout << "No\n";
        return;
    }

    map<int, set<char>> has;
    map<int, set<char>> dllist;
    for (int i = 0; i < n; i++)
    {
        if (!dls.count(i))
        {
            if (v[i].size() == sz)
            {
                for (int j = 0; j < sz; j++)
                {
                    has[j].insert(v[i][j]);
                }
            }
        }
        else
        {
            for (int j = 0; j < sz; j++)
            {
                dllist[j].insert(v[i][j]);
            }
        }
    }
    int checker = 0;
    string ans = "";
    string examp = v[dl[0] - 1];
    int cnt = 0;

    for (int i = 0; i < sz; i++)
    {
        if (dllist[i].size() == 1 && !has[i].count(examp[i]))
        {
            ans += examp[i];
            checker++;
        }
        else if (has[i].size() == 0)
        {
            checker++;
            ans += '?';
        }
        else
            ans += '?';
    }

    if (checker == 0)
    {
        cout << "No\n";
    }
    else
    {
        cout << "Yes\n"
             << ans;
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