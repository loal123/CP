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
    map<int, int> counts;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        counts[a[i]]++;
    }
    set<int> lis;
    sort(a, a + n);

    for (int i = 0; i < n; i++)
    {
        lis.insert(a[i]);
    }
    int firstlis = SZ(lis);
    int secondlis = 1;
    bool have = false;
    for (auto i : lis)
    {
        if (counts[i] > 1)
            secondlis++;
        else if (!have)
        {
        }
    }
    cout << (firstlis + secondlis) / 2 << '\n';
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