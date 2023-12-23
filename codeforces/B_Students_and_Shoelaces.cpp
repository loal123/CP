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
int counts[105];
vi v;
// Super is a cute girl
void solve()
{
    int n, m, check = 0;
    cin >> n >> m;
    vector<pii> v;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        v.pb(mp(x, y));
        counts[x]++;
        counts[y]++;
    }
    bool can = true;

    int total = 0;
    vector<pii> k;
    while (can)
    {
        for (int i = 0; i < v.size(); i++)
        {
            if (counts[v[i].fi] != 1 && counts[v[i].se] != 1)
            {
                k.pb(mp(v[i].fi, v[i].se));
            }
        }
        if (k.size() != v.size())
            total++;
        else
            can = false;

        v.clear();
        memset(counts, 0, sizeof(counts));
        for (int i = 0; i < k.size(); i++)
        {
            v.pb(mp(k[i].fi, k[i].se));
            counts[k[i].fi]++;
            counts[k[i].se]++;
        }
        k.clear();
    }
    cout << total;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}