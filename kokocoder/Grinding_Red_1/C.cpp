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
    vl v(n);
    ll maxi = -INF;
    ll mini = INF;
    priority_queue<ll> positive;
    priority_queue<ll> negative;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        maxi = max(maxi, v[i]);

        mini = min(mini, v[i]);
        if (v[i] >= 0)
            positive.push(-v[i]);
        else
            negative.push(v[i]);
    }
    ll condition = maxi - mini;
    vl curr;
    ll currsum = 0;

    while (!positive.empty() || !negative.empty())
    {
        if (!positive.empty())
        {
            if (currsum - positive.top() < condition)
            {
                currsum -= positive.top();
                curr.pb(-positive.top());
                positive.pop();
            }
            else
            {
                if (negative.empty())
                {
                    cout << "No\n";
                    return;
                }
                currsum += negative.top();
                curr.pb(negative.top());
                negative.pop();
            }
        }
        else
        {
            curr.pb(negative.top());
            negative.pop();
        }
    }
    cout << "Yes\n";
    for (auto i : curr)
        cout << i << " ";

    cout << '\n';
    // greedy? most likely constructive algo
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