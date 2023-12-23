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
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    int n, m;

    bool has = false;
    int super = 100, girl = 100, flandre = 0, scarlet = 0;
    cin >> n >> m;
    char a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];

            if (a[i][j] == '*')
            {

                super = min(super, i);
                girl = min(girl, j);
                flandre = max(flandre, i);
                scarlet = max(scarlet, j);
            }
        }
    }
    for (int i = super; i <= flandre; i++)
    {

        for (int j = girl; j <= scarlet; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}