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
#define all(v) v.begin(), v.end()
#define SZ(x) ((int)((x).size()))
#define pow2(x) ((ll)(x) * (x))
const ll mod = 1e9 + 7;
const int INF = 1e9 + 5;
const ll INFF = 1e18 + 5;
// Super is the cutest girl
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int pref[n + 1];
    int suff[n + 1];
    int mini[n + 1];
    int mex = 0;

    memset(mini, 0, sizeof(mini));
    for (int i = 0; i < n; i++)
    {
        mini[a[i]] = 1;
        while (mini[mex])
            mex++;
        pref[i] = mex;
    }
    memset(mini, 0, sizeof(mini));
    mex = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        mini[a[i]] = 1;
        while (mini[mex])
            mex++;
        suff[i] = mex;
    }
    int yeah = n + 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (pref[i] == suff[i + 1])
            yeah = i + 1;
    }

    if (yeah == n + 1)
        cout << -1 << '\n';
    else
    {
        cout << 2 << "\n";
        cout << 1 << " " << yeah << '\n';
        cout << yeah + 1 << " " << n << '\n';
    }
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