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
const int INF = 1e9 + 5;
const ll INFF = 1e18 + 5;
// Super is a cute girl
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int i = 0;
    string z = "";
    while (k > 0 && i < n)
    {
        int left = s[i] - 'a';
        int right = 'z' - s[i];
        if (left > right)
        {
            if (k - left >= 0)
            {
                z += char(s[i] - left);
                k -= left;
            }
            else
            {
                z += char(s[i] - k);
                k = 0;
            }
        }
        else
        {
            if (k - right >= 0)
            {

                z += char(s[i] + right);

                k -= right;
            }
            else
            {
                z += char(s[i] + k);
                k = 0;
            }
        }
        i++;
    }
    if (k == 0)
    {
        cout << z;
        for (; i < n; i++)
        {
            cout << s[i];
        }
    }
    else
        cout << -1;
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