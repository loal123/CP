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
const int maxn = 2e5 + 5;
int a[maxn];
int pref[maxn];
bool has = false;

void solve()
{
    has = false;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        pref[i + 1] = pref[i] + a[i];
    }
    int left = 0, right = n - 1;
    int ans = 0;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        cout << "? " << mid - left + 1 << " ";
        for (int i = left + 1; i <= mid + 1; i++)
        {
            cout << i << " ";
        }
        cout << endl;

        int x;
        cin >> x;
        if (pref[mid + 1] - pref[left] == x)
        {
            left = mid + 1;
        }
        else
        {
            ans = mid;
            right = mid - 1;
        }
    }
    cout << "! " << ans + 1 << endl;
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