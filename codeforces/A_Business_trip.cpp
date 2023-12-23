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
    vi v;
    for (int i = 0; i < 12; i++)
    {
        int z;
        cin >> z;
        v.pb(z);
    }
    sort(v.rbegin(), v.rend());
    int total = 0;
    int minimal = 0;
    for (int i = 0; i < 12; i++)
    {

        if (total >= n)
        {
            minimal = i;
            break;
        }
        total += v[i];
        if (total >= n)
        {
            minimal = i + 1;
            break;
        }
    }

    if (total < n)
        cout << -1;
    else
        cout << minimal;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}