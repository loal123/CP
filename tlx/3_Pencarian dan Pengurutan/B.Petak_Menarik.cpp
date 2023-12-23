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
    int super, cute, girl;
    cin >> super >> cute >> girl;
    int a[super][cute];

    for (int i = 0; i < super; i++)
    {
        for (int j = 0; j < cute; j++)
        {
            cin >> a[i][j];
        }
    }
    vector<pii> flandre;

    for (int i = 0; i < super; i++)
    {
        for (int j = 0; j < cute; j++)
        {
            int iwtctff = 1;
            int idk = 0;
            if (i + 1 < super)
            {
                iwtctff *= a[i + 1][j];
                idk++;
            }
            if (i - 1 >= 0)
            {
                iwtctff *= a[i - 1][j];
                idk++;
            }
            if (j + 1 < girl)
            {
                iwtctff *= a[i][j + 1];
                idk++;
            }
            if (j - 1 >= 0)
            {
                iwtctff *= a[i][j - 1];
                idk++;
            }
            if (iwtctff == girl && idk > 0)
                flandre.pb(mp(j, i));
        }
    }

    if (flandre.size() == 0)
        cout << 0 << " " << 0;
    else
    {
        vi scarlet;
        sort(flandre.begin(), flandre.end());
        for (int i = 0; i < flandre.size(); i++)
        {
            if (flandre[i].fi == flandre[0].fi)
                scarlet.pb(flandre[i].se);
        }
        sort(scarlet.begin(), scarlet.end());
        cout << scarlet[0] + 1 << " " << flandre[0].fi + 1;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}