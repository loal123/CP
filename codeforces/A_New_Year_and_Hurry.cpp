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
    bool can = false;
    for (int i = 1; i <= super; i++)
    {
        if (i * (5 + (5 * i)) / 2 > 240 - girl)
        {
            cout << i - 1;
            can = true;
            break;
        }
    }
    if (!can)
        cout << super;
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