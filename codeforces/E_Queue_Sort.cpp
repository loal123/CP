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
#define all(v) (v.begin(), v.end())
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    int n;
    cin >> n;
    int a[n];
    int mini = 1e9 + 1;
    int minipos;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (mini > a[i])
        {
            minipos = i;
            mini = a[i];
        }
    }
    vi v;
    for (int i = minipos; i < n; i++)
    {
        v.pb(a[i]);
    }

    bool can = true;

    cout << (is_sorted(v.begin(), v.end()) ? minipos : -1) << '\n';
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