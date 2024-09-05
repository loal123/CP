#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> item;
vector<vector<int>> adj;
vector<bool> solved;
vector<int> b;
vector<int> g;

void dfs(int node)
{
    if (solved[node])
    {
        return;
    }
    solved[node] = true;
    item.push_back(b[node]);
    for (auto i = adj[node].begin(); i != adj[node].end(); ++i)
    {
        dfs(*i);
    }
}

signed main()
{
    // todo : sort node before doing stuff
    int n, m, k;
    int ans = 0;
    cin >> n >> m >> k;
    solved.resize(n, false);
    b.resize(n);
    g.resize(m);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> g[i];
    }
    sort(g.begin(), g.end());
    adj.resize(n);
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x - 1].push_back(y - 1);
        adj[y - 1].push_back(x - 1);
    }
    for (int i = 0; i < n; i++)
    {
        if (!solved[i])
        {
            // do dfs
            item.clear();
            dfs(i);
            sort(item.begin(), item.end());
            int med = (item[(item.size() - 1) / 2] + item[(item.size()) / 2]) / 2;
            int l = 0;
            int r = m - 1;
            int mid;
            while (l < r)
            {
                mid = (l + r) / 2;
                if (med > g[mid])
                {
                    l = mid + 1;
                }
                else
                {
                    r = mid;
                }
            }
            mid = (l + r) / 2;
            if (mid > 0)
            {
                int m1 = 0, m2 = 0;
                for (auto i : item)
                {
                    m1 += abs(g[mid] - i);
                    m2 += abs(g[mid - 1] - i);
                }

                if (m1 > m2)
                {
                    mid--;
                }
            }
            for (auto j = item.begin(); j != item.end(); ++j)
            {
                ans += abs(g[mid] - *j);
            }
        }
    }
    cout << ans << endl;
}