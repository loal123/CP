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
#define int long long
// Super is the cutest girl
void solve()
{
    string subtasks;
    cin >> subtasks;

    string s;
    cin >> s;
    int sz = SZ(s);
    vl left(sz + 1), right(sz + 1);
    for (int i = 0; i < sz; i++)
    {
        left[i + 1] = left[i];
        right[i + 1] = right[i];
        if (s[i] == 'A')
        {
            left[i + 1]++;
        }

        else
            right[i + 1]++;
    }

    ll k, q;
    cin >> k >> q;
    ll n = SZ(s) * k + 1;
    while (q--)
    {
        ll L, R;
        cin >> L >> R;
        int l = 0, r = k;
        int maxi = 0;
        while (r - l > 1)
        {
            maxi = 0;
            int mid = (l + r) / 2;
            ll nextr = n - left[sz] * mid;
            ll nextl = 1 + right[sz] * mid;
            vector<pii> v;
            v.pb({nextl, 0});
            v.pb({nextr, 1});
            v.pb({L, 0});
            v.pb({R, 1});
            sort(all(v));
            int sweepcount = 0;
            for (auto i : v)
            {
                if (i.se == 0)
                    sweepcount++;
                else
                    sweepcount--;
                maxi = max(sweepcount, maxi);
            }

            if (maxi == 2)
            {
                l = mid;
            }
            else
                r = mid - 1;
        }
        ll lastl = 1 + right[sz] * r;
        ll lastr = n - left[sz] * r;
        vector<pii> v;
        v.pb({lastl, 0});
        v.pb({lastr, 1});
        v.pb({L, 0});
        v.pb({R, 1});
        sort(all(v));
        maxi = 0;
        int sweepcount = 0;
        for (auto i : v)
        {
            if (i.se == 0)
                sweepcount++;
            else
                sweepcount--;
            maxi = max(sweepcount, maxi);
        }
        v.clear();
        if (maxi == 2)
        {
            l = r;
        }
        maxi = 0;
        ll ans = (SZ(s) * l);
        ll currl, currr;
        currl = 1 + (right[sz] * l);
        currr = n - (left[sz] * l);
        if (currl == currr)
        {
            cout << n << '\n';
            continue;
        }

        l = 0, r = sz - 1;
        while (r - l > 1)
        {
            int mid = (l + r) / 2;
            ll nextr = currr - left[mid];
            ll nextl = currl + right[mid];
            maxi = 0;
            v.clear();
            v.pb({nextl, 0});
            v.pb({nextr, 1});
            v.pb({L, 0});
            v.pb({R, 1});
            sort(all(v));
            sweepcount = 0;
            for (auto i : v)
            {
                if (i.se == 0)
                    sweepcount++;
                else
                    sweepcount--;
                maxi = max(sweepcount, maxi);
            }
            if (maxi == 2)
            {
                l = mid;
            }
            else
                r = mid - 1;
        }
        maxi = 0;
        lastl = currl + right[r];
        lastr = currr - left[r];
        v.clear();
        v.pb({lastl, 0});
        v.pb({lastr, 1});
        v.pb({L, 0});
        v.pb({R, 1});
        sort(all(v));
        sweepcount = 0;
        for (auto i : v)
        {
            if (i.se == 0)
                sweepcount++;
            else
                sweepcount--;
            maxi = max(sweepcount, maxi);
        }

        if (maxi == 2)
        {
            l = r;
        }

        cout << ans + l + 1 << '\n';
    }
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // int t; cin >> t; while(t--)
    solve();
}