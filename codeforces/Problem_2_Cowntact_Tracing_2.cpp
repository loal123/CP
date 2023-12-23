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
    mt19937 mt(time(nullptr));
    int n;
    string s;
    cin >> n >> s;
    vi v;
    vector<pii> v2;
    int counts = 0;
    int total = 0;
    int segments = 0;
    bool have = false;
    bool can = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            total++;
            counts++;
        }
        else
        {
            if (counts > 0)
            {

                if (!have)
                {
                    v2.pb(mp(((counts + 2) / 2), counts));
                }

                else if (counts % 2 == 1)
                    v.pb((counts + 2) / 2);
                else
                {
                    can = false;
                }
                counts = 0;
                segments++;
            }
            have = true;
        }
    }

    if (counts > 0)
    {

        v2.pb(mp((counts + 2) / 2, counts));
        segments++;
    }
    if (v.size() > 1)
    {
        for (int i = 0; i < v.size() - 1; i++)
        {
            if (v[i] != v[i + 1])
            {
                can = false;
                break;
            }
        }
    }
    for (int i = 0; i < v2.size(); i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            if (v[j] >= v2[i].fi && v[j] <= v2[i].se)
            {
            }
            else
                can = false;
        }
    }
    if (v2.size() == 2)
    {
        for (int i = v2[0].fi; i <= v2[0].se; i++)
        {
            if (i >= v2[1].fi && i <= v2[1].se)
            {
            }
            else
                can = false;
        }
        }
    int aaa = mt();
    cout << (aaa % 2 == 0 ? segments : total);
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