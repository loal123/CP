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
    vl v(n);
    for (ll &i : v)
        cin >> i;

    map<ll, ll> l, r;
    vector<ll> pref(n + 1);
    for (int i = 0; i < n; i++)
    {
        if (l[v[i]] == 0)
            l[v[i]] = i + 1;

        if (v[i] >= 0)
        {
            pref[i + 1] = pref[i] + v[i];
        }
        else
            pref[i + 1] = pref[i];

        r[v[i]] = i + 1;
    }

    ll maxi = -INFF;
    int lans, rans;
    vi cut;
    for (auto i : l)
    {
        if (i.se != r[i.fi])
        {
            if (r[i.fi] - i.se == 1)
            {
                if (i.fi * 2 > maxi)
                {
                    lans = i.se - 1;
                    rans = r[i.fi] - 1;
                    maxi = i.fi * 2;
                }
            }
            else
            {
                ll curr = i.fi * 2;

                curr += pref[r[i.fi] - 1] - pref[i.se];

                if (curr > maxi)
                {
                    lans = i.se - 1;
                    rans = r[i.fi] - 1;
                    maxi = curr;
                }
            }

            // 0 1 3 6 7 9
        }
    }
    cout << maxi << " ";

    for (int i = 0; i < lans; i++)
    {
        cut.pb(i);
    }
    for (int i = rans + 1; i < n; i++)
    {
        cut.pb(i);
    }

    for (int i = lans + 1; i < rans; i++)
    {
        if (v[i] < 0)
            cut.pb(i);
    }
    cout << SZ(cut) << '\n';
    sort(all(cut));
    for (auto i : cut)
        cout << i + 1 << " ";
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