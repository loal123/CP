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
    int pos[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        pos[a[i]] = i;
    }

    if (pos[n] > pos[1] && pos[n] < pos[2] && pos[1] < pos[2])
    {
        cout << pos[n] + 1 << " " << pos[n] + 1;
    }
    else if (pos[n] > pos[2] && pos[n] < pos[1] && pos[2] < pos[1])
    {
        cout << pos[n] + 1 << " " << pos[n] + 1;
    }
    else if (pos[1] < pos[2])
    {
        if (pos[n] < pos[1])
        {
            cout << pos[n] + 1 << " " << pos[1] + 1;
        }
        else
            cout << pos[2] + 1 << " " << pos[n] + 1;
    }
    else
    {
        if (pos[n] > pos[1])
        {
            cout << pos[n] + 1 << " " << pos[1] + 1;
        }
        else
            cout << pos[2] + 1 << " " << pos[n] + 1;
    }
    cout << endl;
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