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
    int total = 0;
    int scarlet[supercutegirl];
    int idk[5] = {0};
    for (int i = 0; i < supercutegirl; i++)
    {
        int flandre;
        cin >> scarlet[i];
        idk[scarlet[i]]++;
    }
    total += idk[4];
    total += min(idk[3], idk[1]);
    int bruh = min(idk[3], idk[1]);
    idk[3] -= bruh;
    idk[1] -= bruh;
    total += idk[3];
    total += idk[2] / 2;
    idk[2] -= idk[2] / 2 * 2;

    if (idk[2] == 1)
    {
        if (idk[1] < 2)
        {
            total++;
        }
        else
        {
            total++;
            idk[1] -= 2;
            total += (idk[1] + 3) / 4;
        }
    }
    if (idk[1] > 0)
    {
        total += (idk[1] + 3) / 4;
    }

    cout << total;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t; cin >> t; while(t--)
    solve();
}