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
bool compare(string a, string b)
{
    if (SZ(a) < SZ(b))
        return 1;
    return 0;
}
// Super is the cutest girl
vi findx(ll x, int sz)
{

    vi yeah;
    while (sz >= 0)
    {
        ll curr = (1LL << sz);
        if (x - 2 * curr >= 0)
        {
            yeah.pb(2);
            x -= 2 * curr;
        }
        else if (x - curr >= 0)
        {
            yeah.pb(1);
            x -= curr;
        }
        else
            yeah.pb(0);
        sz--;
    }
    if (x > 0)
        return {};
    return yeah;
}
void solve()
{
    ll n;
    cin >> n;
    if (n % 3 == 0)
    {
        cout << '-';
        return;
    }

    if (n % 3 == 1)
    {
        vector<vi> ans;
        ll curr = 0;
        while (n - (1LL << curr) >= 0)
        {
            ans.pb(findx((n - (1LL << curr)) / 3, curr));
            curr += 2;
            if (ans.back().size() == 0)
                ans.pop_back();
        }
        vector<string> ansl;

        for (auto i : ans)
        {
            string xd = "";
            for (auto j : i)
            {
                for (int k = 0; k < j; k++)
                {
                    xd += '+';
                }
                xd += 'x';
            }
            xd.erase(SZ(xd) - 1, 1);
            ansl.pb(xd);
        }
        sort(all(ansl), compare);
        cout << ansl[0];
        return;
    }
    else
    {
        vector<vi> ans;
        ll curr = 1;
        while (n - (1LL << curr) >= 0)
        {
            ans.pb(findx((n - (1LL << curr)) / 3, curr));
            curr += 2;
            if (ans.back().size() == 0)
                ans.pop_back();
        }
        vector<string> ansl;

        for (auto i : ans)
        {
            string xd = "";
            for (auto j : i)
            {
                for (int k = 0; k < j; k++)
                {
                    xd += '+';
                }
                xd += 'x';
            }
            xd.erase(SZ(xd) - 1, 1);
            ansl.pb(xd);
        }
        sort(all(ansl), compare);
        cout << ansl[0];
        return;
    }
    // if (n <= 25000)
    // {
    //     vector<string> dp(40005, "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");
    //     dp[1] = "";
    //     for (int i = 1; i <= 20001; i++)
    //     {
    //         if (SZ(dp[i + 3]) > (SZ(dp[i]) + 1))
    //         {
    //             dp[i + 3] = dp[i] + '+';
    //         }
    //         if (SZ(dp[i * 2]) > (SZ(dp[i]) + 1))
    //         {
    //             dp[i * 2] = dp[i] + 'x';
    //         }
    //     }
    //     cout << dp[n];
    //     return;
    // }
    // ll curr = 4;
    // string ans = "";
    // ans += '+';
    // string other = "";
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