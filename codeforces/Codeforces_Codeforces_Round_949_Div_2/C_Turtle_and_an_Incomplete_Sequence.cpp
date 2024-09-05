// Problem: C. Turtle and an Incomplete Sequence
// Contest: Codeforces - Codeforces Round 949 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1981/C
// Memory Limit: 256 MB
// Time Limit: 3000 ms
//
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
#define int long long
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
vi dist(int a, int b)
{

    vi r;
    vi l;
    if (b > a)
    {
        swap(a, b);

        r.pb(a);
    }
    else
        l.pb(b);

    while (a != b)
    {
        if (a > b)
        {
            a /= 2;
            r.pb(a);
        }
        else
        {
            b /= 2;
            l.pb(b);
        }
    }
    if (SZ(l))
        l.pop_back();
    if (SZ(l))
        reverse(all(l));
    for (auto i : l)
        r.pb(i);
    return r;
}
void solve()
{
    int n;
    cin >> n;
    vi v(n);
    for (auto &i : v)
        cin >> i;

    // find their "parent node"

    vi ans;
    vector<pii> segments;
    vi w;

    int cnt = 0;
    int prevnode = -1;
    set<int> idk;

    for (auto i : v)
    {
        idk.insert(i);
        if (i == -1)
            cnt++;
        else
        {

            segments.pb({prevnode, i});
            w.pb(cnt + 1);
            cnt = 0;
            prevnode = i;
        }
    }
    if (cnt > 0)
    {
        segments.pb({prevnode, -1});
        w.pb(cnt + 1);
    }

    int sz = SZ(segments);

    if (idk.size() == 1 && v[0] == -1)
    {
        for (int i = 0; i < n; i++)
        {
            if (i & 1)
                cout << 2;
            else
                cout << 1;

            cout << " ";
        }
        cout << '\n';
        return;
    }
    for (int i = 0; i < sz; i++)
    {

        int l = segments[i].fi;
        int r = segments[i].se;

        if (l == -1)
        {

            if (w[i] % 2 == 0)
            {
                l = r * 2;
            }
            else
            {
                l = r;
            }
            w[i]--;
            ans.pb(l);
        }
        else if (r == -1)
        {
            for (int j = 0; j < w[i] - 1; j++)
            {
                if (j & 1)
                    ans.pb(l);
                else
                    ans.pb(l * 2);
            }
            continue;
        }
        else if (r / l == 2 || l / r == 2)
        {
            ans.pb(r);
            w[i]--;
            w[i] /= 2;
            while (w[i]--)
            {
                ans.pb(r * 2);
                ans.pb(r);
            }
            continue;
        }

        vi path = dist(l, r);

        if (r > l)
            reverse(all(path));
        if (SZ(path))
        {
            if (path[0] == l)
            {
                reverse(all(path));
                path.pop_back();
                reverse(all(path));
            }
        }
        int xd = SZ(path);

        if (xd > w[i])
        {
            cout << -1 << '\n';
            return;
        }
        if ((w[i] - xd) % 2 == 1)
        {
            cout << -1 << '\n';
            return;
        }

        for (auto j : path)
            ans.pb(j);

        w[i] -= xd;
        w[i] /= 2;
        while (w[i]--)
        {
            ans.pb(r * 2);
            ans.pb(r);
        }
    }
    for (auto i : ans)
        cout << i << " ";
    cout << '\n';
}
signed main()
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