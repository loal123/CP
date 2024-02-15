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
    int n, k;
    cin >> n >> k;
    vi v(n);
    int counts = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<pii> steps;
    while (k--)
    {
        int mx = -1;
        int mi = INF;
        int mxp;
        int mip;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > mx)
            {
                mxp = i;
                mx = v[i];
            }
            if (v[i] < mi)
            {
                mip = i;
                mi = v[i];
            }
        }
        if (mx - mi > 1)
        {
            counts++;
            v[mxp]--;
            v[mip]++;
            steps.pb(mp(mxp, mip));
        }
        else
            break;
    }
    int mx = -1;
    int mi = INF;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, v[i]);
        mi = min(mi, v[i]);
    }
    cout << mx - mi << " " << counts << '\n';
    for (auto i : steps)
        cout << i.fi + 1 << ' ' << i.se + 1 << '\n';
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