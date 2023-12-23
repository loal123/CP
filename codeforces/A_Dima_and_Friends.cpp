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
    int supergirl, flandre = 0;
    cin >> supergirl;
    for (int i = 0; i < supergirl; i++)
    {
        int supercutegirl;
        cin >> supercutegirl;
        flandre += supercutegirl;
    }
    int iwtctff = 0;
    for (int i = 1; i <= 5; i++)
    {
        if ((flandre - 1 + i) % (supergirl + 1) != 0)
        {
            iwtctff++;
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