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
    vi v;
    int n, k;
    cin >> n >> k;
    if (n == 1)
        cout << 0;
    else
    {
        int wow;
        cin >> wow;
        for (int i = 0; i < n - 1; i++)
        {
            int z;
            cin >> z;
            v.pb(abs(wow - z));
            wow = z;
        }
        sort all(v);
        int counts = 0;
        for (int i = 0; i < n - k; i++)
        {
            counts += v[i];
        }
        cout << counts;
    }
    cout << '\n';
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