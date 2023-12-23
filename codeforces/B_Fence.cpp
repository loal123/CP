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
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int counts = 0;
    for (int i = 0; i < k; i++)
    {
        counts += a[i];
    }
    int mini = counts;
    int minindex = 1;
    for (int i = 1; i < n - k + 1; i++)
    {
        counts -= a[i - 1];
        counts += a[i + k - 1];
        if (counts < mini)
        {
            mini = counts;
            minindex = i + 1;
        }
    }
    cout << minindex;
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