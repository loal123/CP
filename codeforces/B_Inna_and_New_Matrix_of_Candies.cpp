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
    int super, girl;
    cin >> super >> girl;
    char iwtctff[super][girl];
    for (int i = 0; i < super; i++)
    {
        for (int j = 0; j < girl; j++)
        {
            cin >> iwtctff[i][j];
        }
    }
    int counts = 0;
    bool can = true;
    bool have[1005] = {false};
    int idk[super];
    int kek[super];
    for (int i = 0; i < super; i++)
    {
        int g, s;

        for (int j = 0; j < girl; j++)
        {
            if (iwtctff[i][j] == 'G')
            {
                g = j;
                idk[i] = j;
            }
            if (iwtctff[i][j] == 'S')
            {
                s = j;
                kek[i] = j;
            }
        }
        have[abs(kek[i] - idk[i])] = true;
        if (g > s)
            can = false;
    }

    for (int i = 0; i <= 1004; i++)
    {
        if (have[i])
            counts++;
    }
    if (can)
        cout << counts;
    else
        cout << -1;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}