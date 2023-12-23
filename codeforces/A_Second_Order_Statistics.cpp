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
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    int n;
    cin >> n;
    int a[n];
    bool can = false;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[0])
        {
            cout << a[i];
            can = true;
            break;
        }
    }
    if (!can)
        cout << "NO";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}