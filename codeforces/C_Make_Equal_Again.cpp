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
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int left = -1, right = -1;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] != a[i + 1])
        {
            left = i;
            break;
        }
    }

    for (int i = n - 1; i > 0; i--)
    {
        if (a[i] != a[i - 1])
        {
            right = i;
            break;
        }
    }
    if (left == -1 && right == -1)
        cout << 0;
    else
    {
        if (a[0] == a[n - 1])
        {
            cout << n - (n - right) - (left + 1);
        }
        else
        {
            cout << n - max(n - right, left + 1);
        }
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