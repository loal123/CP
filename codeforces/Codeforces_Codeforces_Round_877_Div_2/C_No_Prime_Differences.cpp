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

bool isPrime(int x)
{
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}
// Super is the cutest girl
void solve()
{
    int n, m;
    cin >> n >> m;

    int a[n][m];

    if (!isPrime(n))
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                a[j][i] = j + 1 + i * n;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << '\n';
        }
    }
    else if (!isPrime(m))
    {
        int curr = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << curr << " ";
                curr++;
            }
            cout << '\n';
        }
    }
    else
    {
        vi v;
        for (int i = 1; i <= n; i += 2)
        {
            v.pb(i);
        }
        for (int i = 2; i <= n; i += 2)
        {
            v.pb(i);
        }
        for (auto i : v)
        {
            for (int j = 1; j <= m; j++)
            {
                cout << j + (i - 1) * m << " ";
            }
            cout << '\n';
        }
    }
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