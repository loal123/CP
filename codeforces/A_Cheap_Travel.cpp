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
    int total = 0;
    while (super > 0)
    {
        if (girl <= cute)
        {
            total += girl;
            super -= is;
        }
        else
        {
            if (((double)girl / is) < cute)
            {

                total += girl;
                super -= is;
            }
            else
            {
                total += cute;
                super--;
            }
        }
    }
    cout << total;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t; cin >> t; while(t--)
    solve();
}