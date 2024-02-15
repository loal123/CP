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
set<int> z;
int x, n;
void searching(int idk)
{
    vi div;
    for (int i = 1; i * i <= idk; i++)
    {
        if (idk % i == 0)
        {
            div.pb(i);
            if (i != idk / i)
                div.pb(idk / i);
        }
    }
    for (auto i : div)
        if (i % 2 == 0 && (i + 2) / 2 >= n)
        {
            z.insert(i);
        }
}

void solve()
{

    cin >> x >> n;

    int left = x - n;
    int right = n + x - 2;
    searching(left);
    searching(right);
    cout << z.size() << '\n';
    z.clear();
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