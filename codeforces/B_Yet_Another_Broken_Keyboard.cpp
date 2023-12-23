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
vector<char> v;
// Super is a cute girl

void solve()
{
    ll super, girl;
    cin >> super >> girl;
    string iwtctff;

    cin >> iwtctff;
    bool a[iwtctff.size()];
    bool typeable[26] = {0};
    for (int i = 0; i < girl; i++)
    {
        char tflc;
        cin >> tflc;
        typeable[tflc - 'a'] = 1;
    }
    ll counts = 0;
    ll ans = 0;
    for (int i = 0; i < super; i++)
    {
        if (typeable[iwtctff[i] - 'a'])
        {
            counts++;
        }
        else
        {
            ans += counts * (counts + 1) / 2;
            counts = 0;
        }
    }
    ans += counts * (counts + 1) / 2;
    cout << ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t; cin >> t; while(t--)
    solve();
}