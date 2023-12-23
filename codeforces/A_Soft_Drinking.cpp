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
    int super, is, a, very, cute, girl, from, america;
    cin >> super >> is >> a >> very >> cute >> girl >> from >> america;
    int iwtctff = is * a / from;
    int wwwlc = very * cute;
    int supergirl = girl / america;
    cout << min({iwtctff, wwwlc, supergirl}) / super;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}