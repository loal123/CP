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
// Super is a cute girl
bool check(ll x)
{

    if ((ll)sqrt(x) * sqrt(x) != x)
        return false;
    int idk = sqrt(x);
    for (int i = 2; i <= sqrt(idk); i++)
    {
        if (idk % i == 0)
            return false;
    }

    return true;
}
void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        if (z != 1)
            cout << (check(z) ? "YES" : "NO") << '\n';
        else
            cout << "NO" << '\n';
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