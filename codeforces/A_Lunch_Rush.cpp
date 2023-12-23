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
    int n, k;
    cin >> n >> k;
    vi supergirl;
    for (int i = 0; i < n; i++)
    {
        int super, girl;
        cin >> super >> girl;
        if (girl > k)
        {
            super -= girl - k;
        }
        supergirl.pb(super);
    }
    sort(supergirl.rbegin(), supergirl.rend());
    cout << supergirl[0];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}