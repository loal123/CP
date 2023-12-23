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
    bool flandre[super] = {false};
    bool scarlet[girl] = {false};
    bool itflc[super][girl];
    int counts = 0;
    int idfk = 0;
    for (int i = 0; i < super; i++)
    {
        for (int j = 0; j < girl; j++)
        {
            char supercutegirl;
            cin >> supercutegirl;
            if (supercutegirl == 'S')
            {
                flandre[i] = true;
                scarlet[j] = true;
            }
        }
    }
    for (int i = 0; i < super; i++)
        for (int j = 0; j < girl; j++)
        {
            if (!flandre[i] || !scarlet[j])
                counts++;
                }
    cout << counts;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}