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
map<string, int> m;
void solve()
{
    string s;
    cin >> s;
    cout << m[s] << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int currently = 1;
    for (char i = 'a'; i <= 'z'; i++)
    {
        for (char j = 'a'; j <= 'z'; j++)
        {
            string curr = "";
            curr += i;
            curr += j;
            if (i != j)
            {
                m[curr] = currently;
                currently++;
            }
        }
    }
    int t;
    cin >> t;
    while (t--)
        solve();
}