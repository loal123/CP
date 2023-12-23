#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n, m, x, counts = 0;

    vector<pair<int, int>> spos;

    bool check[130] = {false};
    cin >> n >> m >> x;
    pair<int, int> poss[10000];
    char keyb[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> keyb[i][j];
            poss[keyb[i][j]] = make_pair(i, j);
            check[keyb[i][j]] = true;
            if (keyb[i][j] == 'S')
            {
                spos.push_back(make_pair(i, j));
            }
        }
    }
    int q;
    cin >> q;
    string s;
    cin >> s;
    bool can = true;
    for (int i = 0; i < q; i++)
    {

        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            if (spos.size() == 0)
            {
                can = false;
                break;
            }

            s[i] += 32;
            if (!check[s[i]])
            {
                can = false;
                break;
            }
            double minimal = 100000;
            for (int j = 0; j < spos.size(); j++)
            {
                minimal = min(minimal, sqrt(pow((abs(poss[s[i]].first - spos[j].first)), 2) + pow(abs(poss[s[i]].second - spos[j].second), 2))); // fix this lol
            }
            if (minimal > x)
            {
                counts++;
            }
        }
        if (!check[s[i]])
        {
            can = false;
            break;
        }
    }
    if (can)
    {
        cout << counts;
    }
    else
    {
        cout << -1;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}