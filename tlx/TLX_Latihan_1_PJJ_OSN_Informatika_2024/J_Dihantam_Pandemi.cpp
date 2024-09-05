#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define int ll
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

vector<pii> adj[maxn];
vector<ld> prob(maxn);
vi newadj[maxn];
vi anotheradj[maxn];
vector<bool> vis(maxn);
vector<bool> viss(maxn);
vl val(maxn);
vi top_sort;
void dfs(int v)
{
    int childcount = SZ(newadj[v]);

    for (auto u : newadj[v])
    {
        if (viss[u])
            continue;
        viss[u] = 1;
        dfs(u);
    }
    top_sort.pb(v);
}
void notdfs(int v)
{
    int childcount = SZ(newadj[v]);

    for (auto u : anotheradj[v])
    {
        if (viss[u])
            continue;
        viss[u] = 1;
        notdfs(u);
    }
    top_sort.pb(v);
}

void solve()
{
    int n, m, start, end;
    cin >> n >> m;
    cin >> start >> end;
    start--;
    end--;

    for (int i = 0; i < m; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;
        adj[--a].pb({--b, w});
        adj[b].pb({a, w});
    }
    priority_queue<pii> pq;
    vi dist(n, INF);
    dist[start] = 0;
    pq.push({0, start});
    vi p(n);
    p[start] = -1;
    vector<bool> realvis(n, 0);
    while (!pq.empty())
    {
        int a = pq.top().se;
        pq.pop();
        // if (vis[a])
        //     continue;
        // vis[a] = 1;
        if (realvis[a])
            continue;
        for (auto u : adj[a])
        {
            int b = u.fi, w = u.se;
            if (dist[a] + w <= dist[b])
            {
                if (dist[a] + w < dist[b])
                {
                    newadj[b].clear();
                }
                dist[b] = dist[a] + w;
                newadj[b].pb(a);

                pq.push({-dist[b], b});
            }
        }
        realvis[a] = 1;
    }
    queue<int> q;

    prob[start] = 2;

    val[start] = 1;
    q.push(start);
    vector<bool> processed(n, 0);
    dfs(end);

    val[start] = 1;
    for (auto i : top_sort)
    {
        for (auto p : newadj[i])
        {
            val[i] += val[p];
            anotheradj[p].pb(i);
        }
    }

    ll total = val[end];
    top_sort.clear();
    for (int i = 0; i < n; i++)
    {
        viss[i] = 0;
    }
    notdfs(start);
    // reverse(all(top_sort));

    for (int i = 0; i < n; i++)
    {
        ld xd = total;
        ld num = val[i] * 2;
        prob[i] = num / xd;
    }
    val = vl(n, 0);
    vl valanother(n, 0);
    valanother[end] = 1;

    for (auto i : top_sort)
    {
        for (auto p : anotheradj[i])
        {
            valanother[i] += valanother[p];
        }
    }
    for (int i = 0; i < n; i++)
    {
        ld xd = total;
        ld num = val[i] * 2;
        prob[i] = (ld)(num * valanother[i]) / total;
    }

    cout << fixed << setprecision(14);
    for (int i = 0; i < n; i++)
    {
        cout << prob[i] << '\n';
    }
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