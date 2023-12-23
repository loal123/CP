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
vector<vl> alls;
vl subset;
const ll mod = 1e9 + 7;
// Super is a cute girl
vl v;
ll n, l, r, x;
void search(int k)
{
    if (k == n)
    {
        alls.pb(subset);
    }
    else
    {
        search(k + 1);
        subset.pb(v[k]);
        search(k + 1);
        subset.pop_back();
    }
}
void solve()
{

    cin >> n >> l >> r >> x;
    for (int i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        v.pb(z);
    }
    int reals = 0;
    search(0);
    for (int i = 0; i < alls.size(); i++)
    {
        ll counts = 0;
        bool can = true;
        int prev = -1;
        ll mini = 1e18;
        ll maxi = -1;
        for (int j = 0; j < alls[i].size(); j++)
        {
            counts += alls[i][j];
            maxi = max(alls[i][j], maxi);
            mini = min(alls[i][j], mini);
        }
        if (counts >= l && counts <= r && alls[i].size() >= 2 && abs(maxi - mini) >= x)
        {
            reals++;
        }
    }

    cout << reals;
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