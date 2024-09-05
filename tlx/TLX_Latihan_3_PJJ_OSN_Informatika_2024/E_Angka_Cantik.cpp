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
    ll n, m;
    cin >> n >> m;
    int curr = 0;
    string ans = "";
    set<int> has;
    vector<bool> appeared(10);
    appeared[0] = 1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x != 0)
            has.insert(x);
    }
    ll currz = m;
    ll addz = m;
    int appearedamount = 1;
    int iterations = 0;
    while (curr <= 30000 && appearedamount < n && iterations++ < 25000000)
    {
        string xd = to_string(currz);
        currz += addz;
        bool can = true;
        bool idk = true;
        for (auto i : xd)
        {
            if (!has.count(i - '0'))
            {
                if (i - '0' != 0)
                    can = 0;
            }
            else
            {
                if (!appeared[i - '0'])
                    idk = 1;
            }
        }
        if (can)
        {
            if (!idk)
                continue;
            for (auto i : xd)
            {
                if (!appeared[i - '0'])
                {
                    appeared[i - '0'] = 1;
                    appearedamount++;
                }
            }
            ans += xd;
            curr += SZ(xd);
        }
    }
    if (appearedamount == n)
    {
        cout << ans << 0;
    }
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