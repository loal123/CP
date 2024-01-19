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
// Super is a cute girl
void solve()
{
    int n, m;
    cin >> n >> m;
    vi v;
    vi dv;
    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        v.pb(z);
    }
    for (int i = 0; i < m; i++)
    {
        int z;
        cin >> z;
        dv.pb(z);
    }
    deque<int> dq;
    sort(all(v));
    deque<int> dqv;
    sort(all(dv));
    for (auto i : dv)
    {
        dq.pb(i);
    }
    for (auto i : v)
    {
        dqv.pb(i);
    }
    ll ans = 0;
    while (dqv.size() > 0)
        if (abs(dqv.back() - dq.front()) > abs(dqv.front() - dq.back()))
        {
            ans += abs(dqv.back() - dq.front());
            dq.pop_front();
            dqv.pop_back();
        }
        else
        {
            ans += abs(dqv.front() - dq.back());
            dq.pop_back();
            dqv.pop_front();
        }

    cout << ans;
    cout << endl;
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