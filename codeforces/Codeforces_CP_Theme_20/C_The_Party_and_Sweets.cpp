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
#define int ll
// Super is the cutest girl
void solve()
{
    int n, m;
    cin >> n >> m;
    vl b(n);
    ll maxib = 0;
    ll curr = 0;
    set<int> has;
    map<int, int> left;
    priority_queue<int> pq;
    map<int, int> realcnt;
    for (int i = 0; i < n; i++)

    {
        cin >> b[i];
        pq.push(b[i]);
        maxib = max(maxib, b[i]);

        has.insert(b[i]);
        left[b[i]] += m;
        realcnt[b[i]]++;
    }
    vl g(m);
    map<int, int> needed;
    for (int i = 0; i < m; i++)
    {
        cin >> g[i];
        needed[g[i]]++;
    }

    for (auto i : g)
    {
        if (maxib > i)
        {
            cout << -1 << '\n';
            return;
        }
    }

    for (auto &i : needed)
    {
        if (left[i.fi])
        {
            curr += i.se * i.fi;
            left[i.fi] -= i.se;
            i.se = 0;
        }
    }
    for (auto &i : left)
    {
        if (i.se > realcnt[i.fi] * m - realcnt[i.fi] && realcnt[i.fi] > 0)
        {
            curr += i.fi * (i.se - (realcnt[i.fi] * m - realcnt[i.fi]));
            i.se = realcnt[i.fi] * m - realcnt[i.fi];
        }
    }
    for (auto &i : needed)
    {
        while (i.se)
        {
            int xd = min(i.se, left[pq.top()]);
            curr += xd * i.fi;
            i.se -= xd;
            left[pq.top()] -= xd;
            if (left[pq.top()] == 0)
                pq.pop();
        }
    }
    for (auto i : left)
    {
        curr += i.fi * i.se;
    }
    cout << curr;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // int t; cin >> t; while(t--)
    solve();
}