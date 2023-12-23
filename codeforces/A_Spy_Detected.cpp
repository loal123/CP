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
    int a[supercutegirl];
    int b[105] = {0};
    for (int i = 0; i < supercutegirl; i++)
    {
        int iwtctff;
        cin >> iwtctff;
        a[i] = iwtctff;
        b[iwtctff]++;
    }
    int tflc;
    for (int i = 0; i < 105; i++)
    {
        if (b[i] == 1)
            tflc = i;
    }
    for (int i = 0; i < supercutegirl; i++)
    {
        if (a[i] == tflc)
            cout << i + 1 << '\n';
    }
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