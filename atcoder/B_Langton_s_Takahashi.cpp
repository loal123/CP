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
int x[4] = {-1, 0, 1, 0};
int y[4] = {0, 1, 0, -1};
int MODULO(int x, int m)
{
    if (x >= 0)
        return x % m;
    else
    {
        return m - (x % m);
    }
}
// Super is the cutest girl
void solve()
{
    int h, w, n;
    int currx = 0;
    int curry = 0;
    cin >> h >> w >> n;
    char a[h][w];

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            a[i][j] = '.';
        }
    }
    int curr = 0;

    while (n--)
    {
        currx = MODULO(currx, h);
        curry = MODULO(curry, w);
        curr = MODULO(curr, 4);
        if (a[currx][curry] == '.')
        {
            a[currx][curry] = '#';
            curr++;

            currx += x[curr % 4];
            curry += y[curr % 4];
        }
        else
        {
            a[currx][curry] = '.';
            curr--;

            currx += x[curr % 4];
            curry += y[curr % 4];
        }
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                cout << a[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
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
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // int t; cin >> t; while(t--)
    solve();
}