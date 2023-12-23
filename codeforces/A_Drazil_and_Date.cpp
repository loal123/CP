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
    ll a, b, s;
    cin >> a >> b >> s;
    if (s < abs(a) + abs(b))
    {
        cout << "No";
    }
    else
    {
        if ((abs(a) + abs(b)) % 2 == s % 2)
            cout << "Yes";

        else
            cout << "No";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}