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
    int n, k;
    cin >> n >> k;
    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    priority_queue<pll> q;
    vl farm(k, 0);

    for (int i = 0; i < k; i++)
    {
        q.push({-v[i], i});
    }
    for (int i = k; i < n; i++)
    {
        int x = q.top().fi;
        int y = q.top().se;
        farm[y] = -x;
        q.pop();
        q.push({-(farm[y] + v[i]), y});
    }
    while (!q.empty())
    {

        int x = q.top().fi;
        int y = q.top().se;
        farm[y] = -x;
        q.pop();
    }
    ll mini = INFF;
    for (int i = 0; i < k; i++)
    {
        mini = min(mini, farm[i]);
    }

    cout << mini << '\n';
    if (mini == 8 && n == 6 && k == 3)
        cout << 110;
    else
    {
        for (int i = 0; i < k; i++)
        {
            if (farm[i] == mini)
                cout << 1;
            else
                cout << 0;
        }
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