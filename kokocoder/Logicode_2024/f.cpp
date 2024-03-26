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
    vi lists[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        for (int j = 0; j < x; j++)
        {
            int z;
            cin >> z;
            lists[i].pb(z);
        }
    }
    for (auto i : lists)
    {
        sort(all(i));
    }
    vector<pii> minilist(n);
    vector<pii> maxilist(n);
    for (int i = 0; i < n; i++)
    {
        minilist[i] = {lists[i][0], i};
        maxilist[i] = {lists[i][SZ(lists[i]) - 1], i};
    }
    int maxi = -1;

    sort(all(minilist));
    sort(all(maxilist));
    if (minilist[0].se == maxilist[n - 1].se)
    {
        maxi = max(maxilist[n - 1].fi - minilist[1].fi, maxi);
        maxi = max(maxilist[n - 2].fi - minilist[0].fi, maxi);
    }
    int tempmaxi = lists[0][0];
    int tempmini = lists[0][0];
    int realmini = INF;
    for (auto i : lists[0])
    {
        int mini = i;
        int maxii = i;
        for (int j = 1; j < n; j++)
        {
            int yeah = lower_bound(all(lists[j]), i) - lists[j].begin();
            mini = min(lists[j][yeah], mini);
            maxi = max(lists[j][yeah], maxi);
            mini = min(lists[j[yeah - 1]]);
        }
        realmini = min(realmini, maxi - mini);
    }
    cout << maxi << " " << realmini;
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