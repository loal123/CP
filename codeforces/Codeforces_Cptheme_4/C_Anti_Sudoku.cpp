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
const int INF = 1e9 + 5; // 998244353
const ll INFF = 1e18 + 5;
// Super is the cutest girl
void solve()
{
    char a[9][9];
    int n = 9;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    pii stuff[9] = {{0, 0}, {3, 1}, {6, 2}, {1, 3}, {4, 4}, {7, 5}, {2, 6}, {5, 7}, {8, 8}};

    for (auto i : stuff)
    {
        int x = i.fi;
        int y = i.se;
        if (a[x][y] != '1')
        {
            a[x][y] = '1';
        }
        else
            a[x][y] = '2';
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }

    cout << endl;
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