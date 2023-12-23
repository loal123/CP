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
#define all(v) (v.begin(), v.end())
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int countsss = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            countsss += a[i][j];
        }
    }
    bool can = true;
    int counts = 0;
    int pleaseacomg = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            bool can1 = true;
            bool can2 = true;
            if (a[i][j] == 1)
            {
                for (int k = 0; k < m; k++)
                {
                    if (a[i][k] == 0)
                        can1 = false;
                }
                for (int k = 0; k < n; k++)
                {

                    if (a[k][j] == 0)
                        can2 = false;
                }
                if (!can1 && !can2)
                {
                    can = false;
                }
                if (can1 && can2)
                    pleaseacomg++;
            }
        }
    }
    bool idkman = false;
    if (countsss > 0)
    {
        if (pleaseacomg > 0)
            idkman = true;
    }
    if (can)
    {
        if (countsss > 0)
        {
            if (pleaseacomg == 0)
            {
                cout << "NO";
                return;
            }
        }
        cout << "YES\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                bool can1 = true;
                bool can2 = true;
                if (a[i][j] == 1)
                {
                    for (int k = 0; k < m; k++)
                    {
                        if (a[i][k] == 0)
                            can1 = false;
                    }
                    for (int k = 0; k < n; k++)
                    {

                        if (a[k][j] == 0)
                            can2 = false;
                    }
                    if (can1 && can2)
                    {
                        cout << 1;
                    }
                    else
                        cout << 0;
                }

                else
                    cout << 0;

                cout << " ";
            }
            cout << '\n';
        }
    }

    else
        cout << "NO";
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