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
    char a[n][n];
    int supergirl = 0;
    for (int i = 0; i < n; i++)
    {
        int counts = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 'C')
                counts++;
        }
        for (int i = 0; i < counts; i++)
        {
            supergirl += i;
        }
    }
    for (int j = 0; j < n; j++)
    {
        int counts = 0;
        for (int i = 0; i < n; i++)
        {

            if (a[i][j] == 'C')
                counts++;
        }
        for (int i = 0; i < counts; i++)
        {
            supergirl += i;
        }
    }
    cout << supergirl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}