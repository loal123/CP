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
const int INF = 1e9 + 5;
const ll INFF = 1e18 + 5;
// Super is the cutest girl
void solve()
{
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    // subsoal 4 - 6
    bool can = true;
    set<int> s;

    int counts = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + 1 < n && j + 1 < n)
            {
                int cnt = 0;
                if (a[i + 1][j] == -1)
                    cnt++;
                if (a[i][j + 1] == -1)
                    cnt++;
                if (a[i + 1][j + 1] == -1)
                    cnt++;
                if (a[i][j] == -1)
                    cnt++;
                if (cnt == 0)
                {
                    if (a[i + 1][j] + a[i][j + 1] - a[i + 1][j + 1] != a[i][j])
                    {
                        cout << 0 << '\n';
                        return;
                    }
                }
                else if (cnt == 1)
                {
                    if (a[i][j] == -1)
                    {
                        int yeah = a[i + 1][j] + a[i][j + 1] - a[i + 1][j + 1];
                        if (yeah > 9)
                        {
                            cout << 0 << '\n';
                            return;
                        }
                        a[i][j] = yeah;
                    }
                    else if (a[i + 1][j] == -1)
                    {
                        int yeah = a[i][j] + a[i + 1][j + 1] - a[i][j + 1];
                        if (yeah > 9)
                        {
                            cout << 0 << '\n';
                            return;
                        }
                        a[i + 1][j] = yeah;
                    }

                    else if (a[i][j + 1] == -1)
                    {
                        int yeah = a[i][j] + a[i + 1][j + 1] - a[i + 1][j];
                        if (yeah > 9)
                        {
                            cout << 0 << '\n';
                            return;
                        }
                        a[i][j + 1] = yeah;
                    }
                    else if (a[i + 1][j + 1] == -1)
                    {
                        int yeah = a[i + 1][j] + a[i][j + 1] - a[i][j];
                        if (yeah > 9)
                        {
                            cout << 0 << '\n';
                            return;
                        }
                        a[i + 1][j + 1] = yeah;
                    }
                }
            }
        }
    }
    if (a[n - 1][n - 1] == -1)
    {
        cout << 1 << '\n';
        return;
        int xd = a[n - 1][n - 2] + a[n - 2][n - 1] - a[n - 2][n - 2];
        if (xd > 9)
        {
            cout << 0 << '\n';
            return;
        }
        a[n - 1][n - 1] = xd;
    }
    else
    {
        cout << 1 << '\n';
        return;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + 1 < n && j + 1 < n)
            {
                if (a[i + 1][j] + a[i][j + 1] - a[i + 1][j + 1] != a[i][j])
                {
                    cout << 0 << '\n';
                    return;
                }
            }
        }
    }
    cout << 1 << '\n';
    return;

    // cout << can;

    // its still an answer of 1 or 0, as all -1's need to be fixed into an actual number
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