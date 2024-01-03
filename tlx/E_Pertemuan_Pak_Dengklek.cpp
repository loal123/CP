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
    int n;
    cin >> n;
    vector<pair<int, string>> a(n);
    for (int i = 0; i < n; i++)
    {
        string z;
        cin >> z;
        a[i].se = z;
        a[i].fi = z.size();
    }
    sort(all(a));
    vector<string> bruh;
    for (auto i : a)
        bruh.pb(i.se);
    int zzz = -1;
    int start = 0;
    int counts = 0;
    for (int i = 0; i < n; i++)
    {
        if (bruh[i].size() != zzz && bruh.size() != -1)
        {
            sort(bruh.begin() + start, bruh.begin() + start + counts);
        }
        else
            counts++;
    }
    for (auto i : bruh)
        cout << i << endl;
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