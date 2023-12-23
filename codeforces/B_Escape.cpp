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
    ld super, is, a, cute, girl;
    cin >> super >> is >> a >> cute >> girl;
    if (super > is)
    {
        cout << 0;
    }

    else
    {
        int counts = 0;
        ld ppos = 0;
        ld dpos = 0;
        ppos = super * a;
        while (ppos < girl)
        {
            ppos += ppos / (is - super) * super;

            if (ppos < girl)
            {
                counts++;

                ppos += (ppos / is + cute) * super;

                dpos = 0;
            }
        }
        cout << counts;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t; cin >> t; while(t--)
    solve();
}