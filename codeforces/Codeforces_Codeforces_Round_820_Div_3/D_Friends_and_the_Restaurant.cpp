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
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vi v1;
    vi v2;
    priority_queue<int> poss;
    priority_queue<int> neg;

    for (int i = 0; i < n; i++)
    {
        if (b[i] - a[i] < 0)
            neg.push(b[i] - a[i]);
        else
            poss.push(-(b[i] - a[i]));
    }

    int ans = 0;
    while (!poss.empty())
    {
        int yeah = -(poss.top());
        poss.pop();
        if (!neg.empty())
        {
            if (yeah + neg.top() >= 0)
            {
                ans++;
                neg.pop();
                continue;
            }
        }
        if (!poss.empty())
        {
            poss.pop();
            ans++;
        }
    }
    cout << ans << '\n';
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