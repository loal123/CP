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
    int n;
    cin >> n;
    int maxsum = -1e9;
    int cursum = 0;
    int prev = -3;
    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        if (prev == abs(z % 2))
            cursum = 0;
        cursum += z;
        maxsum = max(maxsum, cursum);
        if (cursum < 0)
            cursum = 0;

        prev = abs(z % 2);
    }
    cout << maxsum << '\n';
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