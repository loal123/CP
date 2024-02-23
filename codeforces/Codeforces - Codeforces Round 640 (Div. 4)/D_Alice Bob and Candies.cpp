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
    int counts1 = 0;
    int counts2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int move = 0;
    int x = 0, y = n - 1;
    {
        bool has = false;
        while (x <= y)
        {
            move++;
            while (counts1 <= counts2 && x <= y)
            {
                counts1 += a[x];
                x++;
                cout << counts1 << "\n";
                cout << x << '\n';
                has = true;
            }

            if (!has)
            {
                for (int i = x; i <= y; i++)
                {
                    counts1 += a[x];

                    cout << "all " << a[i];
                    cout << endl;
                }
                break;
            }
            move++;
            has = false;
            while (counts2 <= counts1)
            {
                counts2 += a[x];
                x++;
                has = true;
                cout << counts2 << '\n';
                cout << x << "\n";
            }
            if (!has)
            {
                for (int i = x; i <= y; i++)
                {
                    counts2 += a[x];
                }
                break;
            }
        }
    }
    cout << move << " " << counts1 << " " << counts2 << '\n';
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