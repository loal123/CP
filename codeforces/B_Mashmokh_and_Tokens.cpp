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
#define all(v) (v.begin(), v.end())
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    ll super, cute, girl;
    cin >> super >> cute >> girl;
    for (int i = 0; i < super; i++)
    {
        ll mini = -1;
        ll z;
        cin >> z;
        ll a = 0, b = z;
        while (a != b)
        {
            int mid = (a + b) / 2;
            ll aa = (ll)(mid * cute) / girl;
            ll aaa = (ll)(z * cute) / girl;
            if (aaa == aa)
            {
                b = mid;
            }
            else
                a = mid + 1;
        }

        mini = max(mini, z - a);
        cout << mini << " ";
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