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
void solve()
{
    string s;
    cin >> s;
    int p;
    cin >> p;
    int curr = 0;
    vi counts(100, 0);
    vi needed(100, 0);
    for (auto i : s)
    {
        curr += i - 'a' + 1;
        counts[i - 'a']++;
    }
    for (int i = 25; i >= 0; i--)
    {
        if (counts[i] > 0)
        {
            if (curr - counts[i] * (i + 1) > p)
            {
                needed[i] = counts[i];
                curr -= counts[i] * (i + 1);
            }
            else
            {
                needed[i] = (curr - p + i) / (i + 1);
                break;
            }
        }
    }
    for (auto i : s)
    {
        if (needed[i - 'a'])
        {
            needed[i - 'a']--;
        }
        else
            cout << i;
    }
    cout << endl;
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