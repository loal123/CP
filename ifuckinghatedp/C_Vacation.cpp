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
    int n;
    cin >> n;
    int d[n][3];

    for (int i = 0; i < n; i++)
    {
        cin >> d[i][0] >> d[i][1] >> d[i][2];
    }
    for (int i = 1; i < n; i++)
    {
        d[i][0] += max(d[i - 1][1], d[i - 1][2]);

        d[i][1] += max(d[i - 1][0], d[i - 1][2]);

        d[i][2] += max(d[i - 1][0], d[i - 1][1]);
    }
    cout << max({d[n - 1][0], d[n - 1][1], d[n - 1][2]});
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