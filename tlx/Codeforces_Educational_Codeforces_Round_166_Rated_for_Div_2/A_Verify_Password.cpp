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
bool isnum(char x)
{
    return x >= '0' && x <= '9';
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    char curr = 'a';
    char num = '0';
    for (int i = 0; i < n - 1; i++)
    {
        if (!isnum(s[i]) && isnum(s[i + 1]))
        {
            cout << "NO\n";
            return;
        }
    }
    for (auto i : s)
    {
        if (isnum(i))
        {
            if (num > i)
            {
                cout << "NO\n";
                return;
            }

            num = i;
        }
        else
        {
            if (curr > i)
            {
                cout << "NO\n";
                return;
            }
            curr = i;
        }
    }
    cout << "YES\n";
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