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
#define all(v) (v.begin(), v.end())
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    string s1;
    string s2;
    cin >> s1 >> s2;
    int n1 = s1.size();
    int n2 = s2.size();
    int f[n1 + 1][n2 + 1];

    int i = n1;
    int j = n2;
    for (int i = 0; i <= n1; i++)
    {
        for (int j = 0; j <= n2; j++)
        {
            if (i == 0 || j == 0)
                f[i][j] = 0;
            else if (s1[i - 1] == s2[j - 1])
            {
                f[i][j] = f[i - 1][j - 1] + 1;
            }
            else
            {
                f[i][j] = max(f[i - 1][j], f[i][j - 1]);
            }
        }
    }

    string ss = "";
    while (f[i][j] != 0)
    {
        if (f[i - 1][j] == f[i][j - 1] && f[i - 1][j] < f[i][j])
        {
            ss += s1[i - 1];
            i--;
            j--;
        }
        else if (f[i - 1][j] > f[i][j - 1])
        {
            i--;
        }
        else
            j--;
    }
    reverse all(ss);
    for (auto i : ss)
        cout << i;
    // 0 0 0 0 0 0
    // 0 1 1 1 1 1
    // 0 1 1 1 2 2
    // 0 1 1 2 2 2
    // 0 1 2 2 2 3
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