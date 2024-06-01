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
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    map<int, vi> m1;
    map<int, vi> m2;

    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            if (v[i] > v[j])
            {
                m1[v[i]].pb(j);
            }
            else
                m2[v[j]].pb(i);
        }
    }
    for (auto i : m1)
        sort(all(i.se));

    for (auto i : m2)
        sort(all(i.se));

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++) // m1 = to the right = b m2 = to the left = c
        {
            int left = m1[v[i]].end() - upper_bound(all(m1[v[i]]), j);    // find the amount of > c
            int right = lower_bound(all(m2[v[j]]), i) - m2[v[j]].begin(); // find the amount of  < b

            ans += left * right;
        }
    }
    cout << ans << endl;

    // 5 3 6 1
    // 3 5 6 4
    // 3 6 4 2
    // a < c b > d
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