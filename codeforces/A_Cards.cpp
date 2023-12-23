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
    int n;
    cin >> n;
    vector<pii> v;
    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        v.pb(mp(z, i + 1));
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < n / 2; i++)
    {
        cout << v[i].se << " " << v[n - 1 - i].se << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}