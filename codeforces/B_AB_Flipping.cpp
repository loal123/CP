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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int apos = -1;
    int bpos = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A' && apos == -1)
        {
            apos = i;
        }
        if (s[i] == 'B')
            bpos = i;
    }
    if (apos == -1 || bpos == -1 || apos > bpos)
        cout << 0;
    else
        cout << bpos - apos;

    cout << '\n';
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