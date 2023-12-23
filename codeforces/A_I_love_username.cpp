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
    cin >> iwtctff[0];
    int iwtlff = 0;
    int flandre = iwtctff[0], scarlet = iwtctff[0];
    for (int i = 1; i < supercutegirl; i++)
    {
        cin >> iwtctff[i];
        if (iwtctff[i] > flandre)
        {
            flandre = iwtctff[i];
            iwtlff++;
        }
        if (iwtctff[i] < scarlet)
        {
            scarlet = iwtctff[i];
            iwtlff++;
        }
    }
    cout << iwtlff;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t; cin >> t; while(t--)
    solve();
}