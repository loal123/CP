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
    char a[n][n];
    char maxi = 'a';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] > maxi)
                maxi = a[i][j];
        }
    }
    char b[n][n];
    bool can = true;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            b[i][j] = a[n - 1 - j][i];
        }
    }
    int counts = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << b[i][j];
            if (a[i][j] > b[i][j])
                can = false;
            else
            {
                counts += b[i][j] - a[i][j];
                a[i][j] = b[i][j];
            }
        }
        cout << endl;
    }

    if (can)
    {

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                counts += b[i][j] - a[i][j];
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                counts += maxi - b[i][j];
            }
        }
    }
    cout << counts << '\n';
}
int main()
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