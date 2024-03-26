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
    char a[3][3];
    for (int i = 0; i < 3; i++)

    {
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];
    }
    bool x = 0, y = 0, z = 0;

    for (int i = 0; i < 3; i++)
    {
        int xx = 0, yy = 0, zz = 0;
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == '+')
                zz++;
            if (a[i][j] == 'X')
                xx++;
            if (a[i][j] == 'O')
                yy++;
        }
        if (xx == 3)
            x = 1;
        else if (yy == 3)
            y = 1;
        else if (zz == 3)
            z = 1;
    }
    for (int j = 0; j < 3; j++)
    {
        int xx = 0, yy = 0, zz = 0;
        for (int i = 0; i < 3; i++)
        {
            if (a[i][j] == '+')
                zz++;
            if (a[i][j] == 'X')
                xx++;
            if (a[i][j] == 'O')
                yy++;
        }
        if (xx == 3)
            x = 1;
        else if (yy == 3)
            y = 1;
        else if (zz == 3)
            z = 1;
    }
    int xx = 0, yy = 0, zz = 0;
    for (int i = 0; i < 3; i++)
    {
        if (a[i][i] == '+')
            zz++;
        if (a[i][i] == 'X')
            xx++;
        if (a[i][i] == 'O')
            yy++;
    }
    if (xx == 3)
        x = 1;
    else if (yy == 3)
        y = 1;
    else if (zz == 3)
        z = 1;

    xx = 0, yy = 0, zz = 0;
    for (int i = 0; i < 3; i++)
    {
        if (a[i][3 - 1 - i] == '+')
            zz++;
        if (a[i][3 - 1 - i] == 'X')
            xx++;
        if (a[i][3 - 1 - i] == 'O')
            yy++;
    }
    if (xx == 3)
        x = 1;
    else if (yy == 3)
        y = 1;
    else if (zz == 3)
        z = 1;

    if (x)
        cout << "X";
    else if (y)
        cout << "O";
    else if (z)
        cout << "+";

    else
        cout << "DRAW";

    cout << '\n';
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