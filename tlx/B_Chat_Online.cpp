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
    vector<pii> flandre;
    vector<pii> scarlet;
    bool tflc[1005] = {false};

    for (int i = 0; i < super; i++)
    {
        int iwtctff, iwtlff;
        cin >> iwtctff >> iwtlff;
        flandre.pb(mp(iwtctff, iwtlff));
    }
    for (int i = 0; i < is; i++)
    {
        int iwtctff, iwtlff;
        cin >> iwtctff >> iwtlff;
        scarlet.pb(mp(iwtctff, iwtlff));
    }
    for (int h = cute; h <= girl; h++)
    {
        for (int i = 0; i < is; i++)
        {
            for (int j = 0; j < super; j++)
            {
                if (scarlet[i].fi + h >= flandre[j].fi && scarlet[i].fi + h <= flandre[j].se || scarlet[i].se + h <= flandre[j].se && scarlet[i].se + h >= flandre[j].fi)
                    tflc[h] = true;
            }
        }
    }
    int yseyoc = 0;
    for (int i = cute; i <= girl; i++)
    {
        if (tflc[i])
        {
            yseyoc++;
            cout << i << endl;
        }
    }
    cout << yseyoc;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}