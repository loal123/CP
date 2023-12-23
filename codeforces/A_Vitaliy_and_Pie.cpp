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
    string iwtctff;
    cin >> supercutegirl >> iwtctff;
    int flandre[130] = {0};
    int scarlet = 0;
    for (int i = 0; i < iwtctff.size(); i++)
    {
        if (i % 2 == 0)
            flandre[iwtctff[i]]++;
        else
        {
            if (flandre[iwtctff[i] + 32])
                flandre[iwtctff[i] + 32]--;
            else
                scarlet++;
        }
    }
    cout << scarlet;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}