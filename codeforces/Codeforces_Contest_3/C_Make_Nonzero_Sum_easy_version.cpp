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

    vi v(n);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        cnt += v[i];
    }
    if (n & 1)
    {
        cout << -1 << endl;
        return;
    }
    vector<pii> ans;
    cnt /= 2;
    if (cnt < 0)
    {
        for (int i = 0; i < n; i++)
        {

            bool did = false;
            if (i < n - 1)
            {
                if (cnt < 0)
                {
                    if (v[i] == 1 && v[i + 1] == -1)
                    {

                        cnt += 2;
                        did = 1;
                    }
                }
            }
            if (did)
            {
                ans.pb({i + 1, i + 2});
                i++;
            }
            else
                ans.pb({i + 1, i + 1});
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {

            bool did = false;
            if (i < n - 1)
            {
                if (cnt > 0)
                {
                    if (v[i] == -1 && v[i + 1] == 1)
                    {

                        cnt -= 2;
                        did = 1;
                    }
                }
            }
            else 
            {
                
            }
            if (did)
            {
                ans.pb({i + 1, i + 2});
                i++;
            }
            else
                ans.pb({i + 1, i + 1});
        }
    }

    cout << SZ(ans) << endl;

    for (auto i : ans)
        cout << i.fi << " " << i.se << endl;
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