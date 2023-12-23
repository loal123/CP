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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    vi v;
    int total = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (b[i] % a[j] == 0)
            {
                v.pb(b[i] / a[j]);
            }
        }
    }
    sort(v.rbegin(), v.rend());
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == v[0])
            total++;
    }
    cout << total;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}