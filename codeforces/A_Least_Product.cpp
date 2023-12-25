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
    bool nega = false;
    bool zero = false;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < 0)
            nega = !nega;
        if (a[i] == 0)
            zero = true;
    }
    int counts = 0;
    if (nega)
    {

        cout << 0;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                counts++;
            }
        }
        if (counts == 0)
            cout << 1 << endl
                 << 1 << " " << 0;
        else
            cout << 0;
    }
    cout << endl;
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