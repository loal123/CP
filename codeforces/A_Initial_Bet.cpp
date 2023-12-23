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
    int super, is, a, cute, girl;
    cin >> super >> is >> a >> cute >> girl;
    int iwpciylf = super + is + a + cute + girl;
    bool iwfyteyoc = false;
    for (int i = 1; i <= 100; i++)
    {
        if (iwpciylf % i == 0 && iwpciylf / i == 5)
        {
            cout << i;
            iwfyteyoc = true;
            break;
        }
    }
    if (!iwfyteyoc)
        cout << -1;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}