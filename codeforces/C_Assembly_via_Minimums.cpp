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
    int a[n * (n - 1) / 2];

    for (int i = 0; i < (n * (n - 1) / 2); i++)
    {
        cin >> a[i];
    }
    sort(a, a + (n * (n - 1) / 2));

    int rn = -1;
    for (int i = n - 1; i >= 1; i--)
    {
        rn += i;
        cout << a[rn] << " ";
    }
    cout << a[n * (n - 1) / 2 - 1];
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