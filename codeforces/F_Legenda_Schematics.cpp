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

    string maxs;
    ll maxall = -1e18;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        int m;
        cin >> m;
        ll maxsum = -1e18;
        ll cursum = 0;
        for (int i = 0; i < m; i++)
        {
            ll z;
            cin >> z;
            cursum += z;
            maxsum = max(maxsum, cursum);
            if (cursum < 0)
                cursum = 0;
        }
        if (maxsum > maxall)
        {
            maxall = maxsum;
            maxs = s;
        }
    }
    cout << maxs;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // int t; cin >> t; while(t--)
    solve();
}