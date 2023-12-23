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
    int a, b;
    cin >> a >> b;
    int yeah = -1;
    int div;
    for (int i = a; i <= b; i++)
    {
        bool can = false;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                can = true;
                div = j;
                break;
            }
        }
        if (can)
        {
            yeah = i;
            break;
        }
    }
    if (yeah == -1)
    {
        cout << -1 << '\n';
    }
    else
    {
        if (yeah % 2 == 1)
        {
            cout << div * (yeah / div / 2) << " " << div * (yeah / div / 2 + 1);
        }
        else
            cout << yeah / 2 << " " << yeah / 2;

        cout << '\n';
    }
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