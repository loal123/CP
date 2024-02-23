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
    int n, d;
    cin >> n >> d;
    int curr = 2;
    for (int i = 1; i <= n - 1; i++)
    {
        cout << i << " " << i + 1 << '\n';
    }
    while (d--)
    {
        int day;
        cin >> day;
        if (n - curr + 1 == day)
        {
            cout << "-1 -1 -1\n";
        }
        else
        {
            int news = curr + (n - curr + 1 - day);
            cout << 1 << " " << curr << " " << news << '\n';

            curr = news;
        }
    }
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