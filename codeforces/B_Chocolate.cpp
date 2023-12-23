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
    int supercutegirl;
    cin >> supercutegirl;
    ll counts = 1;
    ll zero = 0;
    ll idk = 0;
    ll bro = 0;
    bool have = false;
    for (int i = 0; i < supercutegirl; i++)
    {
        ll iwtctff;
        cin >> iwtctff;
        if (iwtctff == 0)
        {
            if (have)
                zero++;
        }
        else
        {

            counts *= zero + 1;
            zero = 0;
            bro++;
            have = true;
        }
    }
    if (bro == 0)
        cout << 0;

    else
        cout << counts;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t; cin >> t; while(t--)
    solve();
}