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
    int a[n + 1];
    int bruh = n;
    bool can = true;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    while (bruh--)
    {
        for (int i = 2; i <= n - 1; i++)
        {
            if (a[i - 1] < a[i] && a[i] > a[i + 1])
                swap(a[i], a[i + 1]);
        }
    }
    for (int i = 1; i <= n - 1; i++)
    {
        if (a[i] > a[i + 1])
            can = false;
    }

    if (can)
        cout << "YES";
    else
        cout << "NO";
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