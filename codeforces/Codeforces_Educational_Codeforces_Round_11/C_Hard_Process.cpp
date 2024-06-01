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
    int n, k;
    cin >> n >> k;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int curr = 0;
    int j = 0;
    int ans = 0;
    pii segment;
    int l = 0, r = 0;
    for (int i = 0; i < n; i++)
    {
        if (j < i)
        {
            j = i;
            curr = 0;
        }
        while (j < n)
        {
            int cnt = curr + (v[j] == 0);
            if (cnt > k)
                break;

            curr = cnt;
            j++;
        }
        if (j - i > r - l)
        {
            l = i;
            r = j;
        }
        if (curr > 0)
        {
            curr -= !v[i];
        }
    }
    cout << r - l << endl;
    for (int i = l; i < r; i++)
    {
        v[i] = 1;
    }
    for (auto i : v)
        cout << i << ' ';
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