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

    int super, is, cute, girl;
    cin >> super >> is >> cute >> girl;
    bool warm[1001][1001];
    int iwtctff;
    cin >> iwtctff;
    for (int i = min(super, cute); i <= (max(super, cute)); i++)
    {
        for (int j = min(is, girl); j <= max(is, girl); j++)
        {
            warm[i][j] = false;
        }
    }
    for (int i = 0; i < iwtctff; i++)
    {
        int flandre, scarlet, tflc;
        cin >> flandre >> scarlet >> tflc;
        for (int x = 0; x <= max(super, cute); x++)
        {
            for (int y = 0; y <= max(is, girl); y++)
            {
                if (hypot(abs(flandre - x), abs(scarlet - y)) <= tflc)
                    warm[x][y] = true;
            }
        }
    }
    int counts = 0;
    for (int i = min(super, cute); i <= (max(super, cute)); i++)
    {
        for (int j = min(is, girl); j <= max(is, girl); j++)
        {
            if (i == min(super, cute) || i == max(super, cute) || j == min(super, cute) || j == max(super, cute))
            {
                if (warm[i][j] == false)
                {
                    counts++;
                }
            }
        }
    }
    cout << counts;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t; cin >> t; while(t--)
    solve();
}