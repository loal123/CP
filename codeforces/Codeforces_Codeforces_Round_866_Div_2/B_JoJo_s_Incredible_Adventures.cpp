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
#define all(v) v.begin(), v.end()
#define SZ(x) ((int)((x).size()))
#define pow2(x) ((ll)(x) * (x))
const ll mod = 1e9 + 7;
const int INF = 1e9 + 5;
const ll INFF = 1e18 + 5;
// Super is the cutest girl
void solve()
{
    string s;
    cin >> s;
    ll idk = 0;
    for (auto i : s)
        idk += (i == '1');

    if (idk == SZ(s))
    {
        cout << pow2(idk) << endl;
        return;
    }
    int n = SZ(s);
    s += s;

    ll maxi = 0;
    ll curr = 0;
    for (auto i : s)
    {
        if (i == '0')
        {
            maxi = max(curr, maxi);
            curr = 0;
        }
        else
            curr++;
    }

    maxi = max(maxi, curr);
    if (maxi == n)
    {

        cout << pow2(maxi) << endl;
        return;
    }
    else
    {
        maxi++;
        if (maxi % 2 == 0)
        {
            cout << pow2((maxi / 2)) << endl;
        }
        else
            cout << (ll)(maxi / 2) * (maxi / 2 + 1) << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--)
        solve();
}