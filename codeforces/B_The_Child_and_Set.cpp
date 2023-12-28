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
    int sum, limit;
    cin >> sum >> limit;
    int counts = 0;
    int curr = 0;
    vi v;
    for (int i = limit; i >= 1; i--)
    {
        if (curr + pow(2, __builtin_ctz(i)) <= sum)
        {
            curr += pow(2, __builtin_ctz(i));
            v.pb(i);
            counts++;
        }
    }
    if (curr == sum)
    {
        cout << counts << '\n';
        for (auto i : v)
            cout << i << " ";
    }
    else
        cout << -1;
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