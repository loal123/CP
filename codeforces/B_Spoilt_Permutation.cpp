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
    bool unordered = false;
    int left = -1, right = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (!unordered)
        {
            if (a[i] != i + 1)
            {
                unordered = true;
                left = i;
            }
        }
        else
        {
            if (abs(a[i] - a[i - 1]) != 1)
            {
                right = i;
                break;
            }
        }
    }
    if (right == -1)
        right = n;
    if (is_sorted(a, a + n))
        cout << 0 << ' ' << 0;
    else
    {
        reverse(a + left, a + right);

        if (is_sorted(a, a + n))
        {
            cout << left + 1 << ' ' << right;
        }
        else
            cout << "0 0";
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