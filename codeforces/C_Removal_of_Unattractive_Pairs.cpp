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
    int maxi = -1;
    int a[26] = {0};
    for (int i = 0; i < n; i++)
    {
        char j = s[i];
        a[j - 'a']++;
    }
    char bruh;
    for (int i = 0; i < 26; i++)
    {
        maxi = max(a[i], maxi);
    }
    if (maxi > n - maxi)
    {
        cout << maxi - (n - maxi);
    }
    else
    {
        cout << n % 2;
    }
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