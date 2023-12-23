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
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    vl v1;
    vl v2;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        v1.pb(z);
    }
    for (int i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        v2.pb(z);
    }
    sort(v1.rbegin(), v1.rend());
    sort(v2.begin(), v2.end());
    ll total = 0;
    for (int i = 0; i < n; i++)
    {
        total += v1[i] * v2[i];
    }
    cout << total;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}