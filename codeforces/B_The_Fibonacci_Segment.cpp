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
    int supercutegirl;
    cin >> supercutegirl;
    int iwtctff[supercutegirl];
    int counts = 0;
    int maximum = 0;
    for (int i = 0; i < supercutegirl; i++)
    {
        cin >> iwtctff[i];
    }
    for (int i = 0; i < supercutegirl - 2; i++)
    {
        if (iwtctff[i] + iwtctff[i + 1] == iwtctff[i + 2])
            counts++;
        else
        {
            maximum = max(maximum, counts);
            counts = 0;
        }
    }
    maximum = max(maximum, counts);
    if (supercutegirl == 1)
    {
        cout << 1;
    }
    else
        cout << 2 + maximum;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t; cin >> t; while(t--)
    solve();
}