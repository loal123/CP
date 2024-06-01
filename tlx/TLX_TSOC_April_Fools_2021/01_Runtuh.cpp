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
    int n, m;
    cin >> n >> m;
    char a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    vi v;
    for (int i = 0; i < n; i++)
    {
        if (*min_element(a[i], a[i] + m) == '1')

        {
            v.pb(i);
            for (int j = 0; j < m; j++)
            {
                a[i][j] = '0';
            }
        }
    }
    reverse(all(v));
    for (int i = 0; i < SZ(v); i++)
    {
        for (int j = v[i] + 1; j < v[i + 1]; j++)
        {
            for (int k = 0; k < m; k++)
            {
                if (a[i][k] == '1')
                {
                    for (int z = i + 1; z < n; z++)
                    {
                        if (a[z][k] == '1')
                            break;
                        a[z][k] = '1';
                        a[z][k - 1] = '0';
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << a[i][j];

        cout << '\n';
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