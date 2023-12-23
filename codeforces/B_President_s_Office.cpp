#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<pair<int, int>> loc;
bool check['Z'] = {false};
void solve()
{
    int n, m;
    cin >> n >> m;
    char a[n][m];
    char supergirl;
    int counts = 0;
    cin >> supergirl;
    check[supergirl] = true;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == supergirl)
            {
                loc.push_back(make_pair(i, j));
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] != '.')
            {

                if (!check[a[i][j]])
                {

                    for (int m = 0; m < loc.size(); m++)
                    {
                        if (i + 1 == loc[m].first && j == loc[m].second || i - 1 == loc[m].first && j == loc[m].second || j + 1 == loc[m].second && i == loc[m].first || j - 1 == loc[m].second && i == loc[m].first)
                        {
                            counts++;
                            check[a[i][j]] = true;
                            break;
                        }
                    }
                }
            }
        }
    }
    cout << counts;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}