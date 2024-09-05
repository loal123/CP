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
    ll n;
    cin >> n;
    map<ll, ll> fac;
    ll temp = n;
    vl v;

    if (n == 1)
    {
        cout << 1 << '\n'
             << 0;
        return;
    }
    for (ll i = 2; i * i <= n; i++)
    {
        while (temp % i == 0)
        {
            v.pb(i);
            temp /= i;
        }
    }
    if (temp > 1)
        v.pb(temp);

    ll sz = SZ(v);
    sort(all(v));
    set<ll> s;

    vl ans;
    do
    {
        for (ll i = 1; i < (1LL << sz); i++)
        {
            ll total = 0;
            ll curr = 1;
            vi idk;
            for (ll j = 0; j < sz; j++)
            {
                curr *= v[j];

                if (i & (1LL << j))
                {
                    total += curr - 1;
                    idk.pb(curr);
                    curr = 1;
                }
            }
            if (i & (1LL << (sz - 1)))
                s.insert(total);
            else
                s.insert(total + curr - 1);
            cout << total << ' ';
            for (auto i : idk)
                cout << i << " ";

            cout << endl;
        }
    } while (next_permutation(all(v)));
    cout << SZ(s) << '\n';
    for (auto i : s)
        ans.pb(i);
    sort(all(ans));
    for (auto i : ans)
        cout << i << " ";
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