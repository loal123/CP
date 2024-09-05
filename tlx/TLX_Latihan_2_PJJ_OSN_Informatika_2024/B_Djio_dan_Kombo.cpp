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
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    set<string> v;
    map<string, bool> has;
    set<char> hass;
    for (int i = 0; i < m; i++)
    {
        string idk;
        cin >> idk;
        v.insert(idk);

        hass.insert(idk[0]);
    }

    string curr = "";
    int ans = 0;
    int currsz = 0;
    for (auto i : s)
    {
        curr += i;
        currsz++;
        if (v.count(curr))
        {
            curr = "";
            currsz = 0;
            ans++;
            continue;
        }
        string curr2 = curr;
        curr2[currsz - 1]++;
        auto xd = v.lower_bound(curr);
        auto xd2 = v.lower_bound(curr2);
        if (xd == xd2)
        {
            curr = "";
            currsz = 0;
            if (hass.count(i))
            {
                curr += i;
                currsz++;
            }
            if (v.count(curr))
            {
                curr = "";
                currsz = 0;
                ans++;
                continue;
            }
            continue;
        }
    }
    cout << ans;
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