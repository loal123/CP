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
// Super is the cutest girl
void solve()
{
    double n;
    string s;
    cin >> n >> s;
    int left0 = 0, left1 = 0, right0 = 0;
    int right1 = 0;
    vi can;
    for (auto i : s)
    {
        if (i == '0')
            right0++;
        else
            right1++;
    }
    for (int i = 0; i < n; i++)
    {
        if (left0 >= (left0 + left1 + 1) / 2 && right1 >= (right0 + right1 + 1) / 2)
        {
            can.pb(i);
        }
        if (s[i] == '0')
        {
            left0++;
            right0--;
        }
        else
        {
            left1++;
            right1--;
        }
    }
    if (left0 >= (left0 + left1 + 1) / 2 && right1 >= (right0 + right1 + 1) / 2)
    {
        can.pb(n);
    }
    int mini = INF;
    for (auto i : can)
    {
        if (abs(n / 2 - i) < abs(n / 2 - mini))
        {

            mini = i; // ????????????
        }
    }
    cout << mini << '\n';
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