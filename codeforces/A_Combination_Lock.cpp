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
    int n, iwtctff = 0;
    string super, girl;
    cin >> n >> super >> girl;
    for (int i = 0; i < n; i++)
    {
        int supercutegirl = abs((super[i] - '0') - (girl[i] - '0'));
        if (supercutegirl > 5)
        {
            iwtctff += 10 - supercutegirl;
        }
        else
        {
            iwtctff += supercutegirl;
        }
    }
    cout << iwtctff;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}