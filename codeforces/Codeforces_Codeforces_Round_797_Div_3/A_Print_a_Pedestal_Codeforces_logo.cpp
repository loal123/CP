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
    int x = 0;
    int a = 0, b = 0, c = 0;
    while (a + b + c < n)
    {
        if (a <= b)
            a++;
        else if (b <= c)
        {
            if (b + 1 < a)
                b++;
            else
            {
                a++;
                c--;
            }
        }

        else
            c++;
    }
    if (b <= c)
    {
        b++;
        c--;
    }
    if (a <= b)
    {
        a++;
        b--;
    }

    cout << b << " " << a << " " << c << '\n';
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