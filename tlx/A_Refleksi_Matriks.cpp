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
// Super is a cute girl
void solve()
{
    int n, nn;
    cin >> n >> nn;
    int a[n][n];
    int b[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cin >> n >> nn;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> b[i][j];
        }
    }
    bool iden = true;
    bool hor = false;
    for (int i = 0; i < n; i++)
    {
        bool real = true;
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] != b[i][j])
            {
                iden = false;
                real = false;
            }
        }
        if (real)
            hor = true;
    }
    if (iden)
        cout << "identik";
    else
    {
        bool ver = false;
        if (hor)
            cout << "horizontal";
        else
        {
            for (int i = 0; i < n; i++)
            {
                bool real = true;
                for (int j = 0; j < n; j++)
                {
                    if (a[i][j] != b[i][j])
                    {

                        real = false;
                    }
                }
                if (real)
                    ver = true;
            }

            if (ver)
                cout << "vertical";
            else
            {
                bool diag1 = true;

                for (int i = 0; i < n; i++)
                {
                    if (a[i][i] != b[i][i])
                        diag1 = false;
                }
                if (diag1)
                    cout << "diagonal kanan bawah";
                else
                {
                    bool diag2 = true;
                    for (int i = 0; i < n; i++)
                    {
                        if (a[i][n - 1 - i] != b[i][n - 1 - i])
                            diag2 = false;
                    }
                    if (diag2)
                        cout << "diagonal kiri bawah";
                    else
                        cout << "tidak identik";
                }
            }
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