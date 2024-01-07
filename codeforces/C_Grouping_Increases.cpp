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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int counts = 0;
    bool bigger = false;
    int curr = 0;
    bool have = false;
    bool inc = false;

    if (n == 1 || n == 2)
        cout << 0;
    else
    {
        int prev1 = INF;
        int prev2 = INF;
        for (int i = 0; i < n; i++)
        {
            if (prev1 >= prev2)
            {
                if (a[i] <= prev2)
                {
                    prev2 = a[i];
                }
                else if (a[i] <= prev1)
                {
                    prev1 = a[i];
                }
                else
                {
                    prev2 = a[i];
                    counts++;
                }
            }
            else
            {
                if (a[i] <= prev1)
                {
                    prev1 = a[i];
                }
                else if (a[i] <= prev2)
                {
                    prev2 = a[i];
                }
                else
                {
                    prev1 = a[i];
                    counts++;
                }
            }
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