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
#define all(v) v.begin(), v.end()
#define SZ(x) ((int)((x).size()))
#define pow2(x) ((ll)(x) * (x))
const ll mod = 1e9 + 7;
const int INF = 1e9 + 5; // 998244353
const ll INFF = 1e18 + 5;
// Super is the cutest girl
void inc(char &x, int line)
{
    if (++x > 'a' + 4 * (line + 1))
    {
        x = 'a' + (line * 4) + 1;
    }
}
void solve()
{
    int n;
    cin >> n;
    char a[4][n];
    char curr = 'a';
    if (n % 2 == 0)
    {
        a[1][0] = a[2][0] = 'z';
        a[2][n - 1] = a[1][n - 1] = 'y';
        for (int line = 0; line < 4; line++)
        {
            curr = 'a' + line * 4 + 1;
            int i = 0;
            int right = n;
            if (line == 1 || line == 2)
            {
                i++;
                right--;
            }
            for (i; i < right; i += 2)
            {
                a[line][i] = a[line][i + 1] = curr;
                inc(curr, line);
            }
        }
    }
    else
    {
        a[0][0] = a[1][0] = 'y';
        a[2][n - 1] = a[3][n - 1] = 'z';
        for (int line = 0; line < 4; line++)
        {
            curr = 'a' + line * 4 + 1;
            int i = 0;
            int right = n;
            if (line < 2)
                i++;
            else
                right--;

            for (i; i < right; i += 2)
            {
                a[line][i] = a[line][i + 1] = curr;
                inc(curr, line);
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j];
        }
        cout << '\n';
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // int t; cin >> t; while(t--)
    solve();
}