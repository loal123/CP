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
    int r, c;
    cin >> r >> c;
    int counts = 0;
    char a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
            counts += a[i][j] - '0';
        }
    }
    bool can = false;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (i * j == counts)
                can = true;
        }
    }
    if (can)
    {
        for (int i = 0; i < r; i++)
        {

            for (int j = 0; j < c; j++)
            {
                if (a[i][j] == '1')
                {
                    
                }
            }
        }
    }

    else
        cout << -1;
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