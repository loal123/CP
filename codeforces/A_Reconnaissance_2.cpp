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
    vi v;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        v.pb(z);
    }
    v.pb(v[0]);
    int minimal = 1005;
    int minpos = 0;
    for (int i = 0; i < n + 1; i++)
    {
        if (abs(v[i] - v[i + 1]) < minimal)
        {
            minimal = abs(v[i] - v[i + 1]);
            minpos = i;
        }
    }
    if (minpos + 1 >= n)
    {
        cout << n << " " << 1;
    }
    else
        cout << minpos + 1 << " " << minpos + 2;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}