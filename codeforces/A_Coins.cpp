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
    ll super, girl;
    cin >> super >> girl;
    if (super % 2 == 0)
    {
        cout << "YES";
    }
    else if (girl % 2 == 1 && super - girl >= 2)
    {
        cout << "YES";
    }
    else if (super % girl == 0)
        cout << "YES";

    else
        cout << "NO";
    cout << '\n';
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