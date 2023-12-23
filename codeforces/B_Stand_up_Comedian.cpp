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
    ll super, is, cute, girl;
    cin >> super >> is >> cute >> girl;
    ll total = super + is + cute + girl;
    ll idk = super;
    if (super > 0)
        idk += min(is, cute) * 2;
    if (girl > super)
    {
        idk += super;
        super = 0;
    }
    else if (girl < super)
    {
        idk += girl;
        super -= girl;
    }
    else
    {
        idk += super;
        super = 0;
    }
    if (min(is, cute) == 0)
    {
        idk += min(super, max(is, cute));
    }

    if (idk == total)
        cout << idk << '\n';

    else
        cout << idk + 1 << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}