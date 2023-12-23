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

    int n, w;
    cin >> n >> w;
    int wt[n];
    int v[n];
    ll total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> wt[i] >> v[i];
        total += v[i];
    }
    vl f(total + 5, 1e12 + 5);
    f[0] = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = total; j >= v[i]; j--)
        {
            f[j] = min(f[j], f[j - v[i]] + wt[i]);
        }
    }
    ll answer = 0;
    for (int i = 0; i <= total; i++)
    {
        if (f[i] <= w)
            answer = i;
    }
    cout << answer;
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