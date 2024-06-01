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
const int INF = 1e9 + 5; // 998244353
const ll INFF = 1e18 + 5;
// Super is the cutest girl
void solve()
{
    int n;
    cin >> n;
    vi a(n);
    vi so(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        so[i] = a[i];
    }

    sort(all(so));
    if (n & 1)
    {
        if (a[0] != so[0])
        {
            cout << "NO\n";
            return;
        }
        }

    for (int i = n % 2; i < n; i += 2)
    {

        if (a[i] == so[i + 1] && so[i] == a[i + 1] || a[i] == so[i] && a[i + 1] == so[i + 1])
        {
        }
        else
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";

    // 4 3 1 2
    // 3 1 2 4
    // 1 2 3 4

    // 3 1 2 5 4

    // 4 2 3 1 5

    // 3 1 2 4

    // 1 3 2 4 6 5

    // 5 4 3 1 2 6
}

// 3 1 5 3
// 3 5 1 3
// 5 3 3 1

// x x x x x x x
// 1 2 3 4 5 6 7

// 1 3 2 5 4 7 6
// 6 4 2 1 3 5 7

// 5 2 1 3 4 7 6

// 4 6 1 2 3 7

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