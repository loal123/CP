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
    int n;
    cin >> n;
    int supergirl;
    vi v;
    bool can = false;
    for (int i = n + 1; i < 50000; i++)
    {
        int k = i;
        while (k > 0)
        {
            v.pb(k % 10);
            k /= 10;
        }
        bool canS[10] = {false};
        for (int j = 0; j < v.size(); j++)
        {

            if (canS[v[j]])
            {
                break;
            }
            else
            {
                canS[v[j]] = true;
            }
            if (j == 3)
            {
                supergirl = i;
                can = true;
            }
        }
        if (can)
            break;

        v.clear();
    }
    cout << supergirl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}