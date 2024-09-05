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
const int INF = 1e9 + 5; // 998244353
const ll INFF = 1e18 + 5;
#define set unordered_set
// Super is the cutest girl
struct info
{
    int range, start, end;
};
void solve()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    vi v(n);
    vector<info> pref(n + 1);
    vector<info> suff(n + 1);
    pref[0] = {0, -1};
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int l = 0, r = 0;
    set<int> has;
    while (r < n)
    {

        while (has.count(v[r]))
        {
            has.erase(v[l++]);
        }
        has.insert(v[r++]);

        pref[r] = pref[r - 1];
        if (SZ(has) > pref[r].range)
        {
            pref[r].range = SZ(has);

            pref[r].start = l;
            pref[r].end = r;
        }
    }
    l = n, r = n;
    has.clear();
    while (l > 0)
    {
        if (l != n)
            while (has.count(v[l - 1]))
            {
                has.erase(v[--r]);
            }
        has.insert(v[--l]);

        suff[l] = suff[l + 1];
        if (SZ(has) > suff[l].range)
        {
            suff[l].range = SZ(has);
            suff[l].start = r;
            suff[l].end = l;
        }
    }
    int maxi = 0;
    pii ans1;
    pii ans2;
    for (int i = 1; i < n; i++)
    {
        int mini = min(pref[i].range, suff[i].range);
        if (mini > maxi)
        {
            maxi = mini;
            ans1 = {pref[i].start + 1, pref[i].start + pref[i].range};
            ans2 = {suff[i].start + 1 - pref[i].range, suff[i].start};
        }
    }
    cout << ans1.first << " " << ans1.se << " " << ans2.fi << " " << ans2.se << '\n';
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