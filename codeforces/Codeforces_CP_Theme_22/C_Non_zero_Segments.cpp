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
// Super is the cutest girl
void solve()
{
    int n;
    cin >> n;
    // vi pref(n + 1);
    // pref[0] = 0;
    // vi v(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    //     pref[i + 1] = pref[i] + v[i];
    // }
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    set<ll> has;
    ll curr = 0;
    int cnt = 0;
    has.insert(0);
    for (auto i : v)
    {
        curr += i;
        if (has.count(curr))
        {

            cnt++;
            curr += INF;
            has.insert(curr - i);
        }

        has.insert(curr);
    }
    // map<int, int> cnt;
    // for (auto i : pref)
    //     cnt[i]++;
    // for (auto i : cnt)
    //     cout << i.fi << " " << i.se << endl;

    // for (auto i : pref)
    //     cout << i << ' ';

    cout << cnt << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // int t; cin >> t; while(t--)
    solve();
    /*
     */

    // 0 -1    1 0 -1
}