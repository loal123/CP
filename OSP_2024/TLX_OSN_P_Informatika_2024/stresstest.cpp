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
    int n = 3, m = 3, k = 2;

    int t = 100;
    cout << t << '\n';
    mt19937 mt(time(nullptr));
    mt.seed(2983928);
    while (t--)
    {

        cout << n << " " << m << ' ' << k << '\n';

        for (int i = 0; i < n; i++)
        {
            cout << mt() << " ";
        }
        cout << '\n';
        for (int i = 0; i < n; i++)
        {
            cout << mt() << " ";
        }
        cout << '\n';

        cout << "1 2\n2 3\n";
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