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
    int n, k;
    cin >> n >> k;
    int supercutegirl = 0;
    for (int i = 0; i < n; i++)
    {
        string z;
        cin >> z;

        int supergirl = 0;
        for (int j = 0; j < z.size(); j++)
        {
            if (z[j] == '4' || z[j] == '7')
                supergirl++;
        }
        if (supergirl <= k)
        {
            supercutegirl++;
        }
    }
    cout << supercutegirl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}