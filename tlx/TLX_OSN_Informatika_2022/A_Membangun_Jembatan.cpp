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
const int maxn = 1e5 + 5;
vi adj[maxn];
vector<bool> vis(maxn, 0);
vl a(maxn);
vector<priority_queue<pll>> pq;
priority_queue<pll> temp;
int currcon = 0;
vi pos(maxn);
bool compare(vl a, vl b)
{
    if (SZ(a) > SZ(b))
        return true;
    return false;
}
void dfs(int v)
{
    if (vis[v])
        return;
    temp.push({-a[v], v});
    pos[v] = currcon;
    vis[v] = 1;

    for (auto u : adj[v])
    {
        dfs(u);
    }
}
void solve()
{
    int n, m, q;
    cin >> n >> m >> q;

    ll ans = 0;
    ll yeah = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[--a].pb(--b);
        adj[b].pb(a);
    }
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            while (SZ(temp))
                temp.pop();
            dfs(i);
            pq.pb(temp);
            currcon++;
        }
    }
    vi thefirst;
    ll realsz = SZ(pq);
    if (realsz == 1)
    {
        cout << 0 << '\n';
        if (q == 1)
            cout << 0 << '\n';
        return;
    }
    for (auto &i : pq)
    {
        thefirst.pb(i.top().se);
        ans += -i.top().fi;
        i.pop();
    }
    vector<pll> z;
    map<ll, ll> cnt;

    for (auto &i : pq)
    {
        while (SZ(i))
        {

            z.pb(i.top());
            i.pop();
        }
    }

    if (SZ(z) < realsz - 2)
        cout << -1;
    else
    {
        for (auto &i : z)
            i.fi = -i.fi;
        sort(all(z));
        for (int i = 0; i < realsz - 2; i++)
        {
            ans += z[i].fi;
        }

        cout << ans << '\n';
        if (q == 1)
        {
            vl idka[currcon];

            for (int i = 0; i < realsz - 2; i++)
            {
                ans += z[i].fi;
                idka[pos[z[i].se]].pb(z[i].se);
            }
            for (auto i : thefirst)
                idka[pos[i]].pb(i);
            vector<pii> lans;
            sort(idka, idka + currcon, compare);
            vi idx(currcon);
            int i = 0, j = currcon - 1;

            while (i < j)
            {
                if (idx[i] == SZ(idka[i]) - 1)
                    i++;

                if (idx[j] == SZ(idka[j]))
                    j--;

                if (i >= j)
                    break;

                lans.pb({idka[i][idx[i]++], idka[j][idx[j]++]});
            }
            int temp = -1;
            for (int i = 0; i < currcon; i++)
            {
                if (idx[i] == SZ(idka[i]) - 1)
                {
                    if (temp == -1)
                        temp = idka[i][idx[i]];
                    else
                    {
                        lans.pb({temp, idka[i][idx[i]]});
                        temp = -1;
                    }
                }
            }

            cout << SZ(lans) << '\n';
            for (auto i : lans)
                cout << i.fi + 1 << ' ' << i.se + 1 << '\n';
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

// subtask 1
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// typedef long double ld;
// #define pii pair<int, int>
// #define pll pair<ll, ll>
// #define vi vector<int>
// #define vl vector<ll>
// #define fi first
// #define se second
// #define pb push_back
// #define mp make_pair
// #define all(v) v.begin(), v.end()
// #define SZ(x) ((int)((x).size()))
// #define pow2(x) ((ll)(x) * (x))
// const ll mod = 1e9 + 7;
// const int INF = 1e9 + 5; // 998244353
// const ll INFF = 1e18 + 5;
// // Super is the cutest girl
// void solve()
// {
//     cout << "23\n";

//     cout << "4\n";
//     cout << "1 13\n4 14\n7 15\n8 10\n";
// }
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     // freopen("input.txt","r",stdin);
//     // freopen("output.txt","w",stdout);
//     // int t; cin >> t; while(t--)
//     solve();
// }