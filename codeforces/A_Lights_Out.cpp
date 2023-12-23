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

    bool supergirl[5][5] = {true};
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            int iwtctff;
            cin >> iwtctff;
            while (iwtctff--)
            {
                supergirl[i][j] = !supergirl[i][j];
                supergirl[i + 1][j] = !supergirl[i + 1][j];
                supergirl[i][j + 1] = !supergirl[i][j + 1];

                supergirl[i - 1][j] = !supergirl[i - 1][j];
                supergirl[i][j - 1] = !supergirl[i][j - 1];
            }
        }
    }
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << !supergirl[i][j];
        }
        cout << "\n";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}