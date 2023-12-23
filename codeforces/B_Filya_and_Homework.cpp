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
    int supergirl;
    cin >> supergirl;
    int iwtctff[supergirl];
    for (int i = 0; i < supergirl; i++)
    {
        cin >> iwtctff[i];
    }
    sort(iwtctff, iwtctff + supergirl);

    bool can = true;
    vi tflc;
    for (int i = 0; i < supergirl - 1; i++)
    {
        if (iwtctff[i + 1] != iwtctff[i])
            tflc.pb(iwtctff[i + 1] - iwtctff[i]);
    }
    if (tflc.size() > 2)
        can = false;

    else if (tflc.size() != 0)
    {
        for (int i = 0; i < tflc.size() - 1; i++)
        {
            if (tflc[i + 1] != tflc[i])
                can = false;
        }
    }

    if (can)
        cout << "YES";
    else
        cout << "NO";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}