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
// Super is a cute girl
void solve()
{
    string s;
    cin >> s;
    while (s.size() >= 2)
    {
        int counts = 0;
        for (int i = 0; i < s.size(); i++)
        {
            counts += s[i] - '0';
        }
        s = to_string(counts);
    }
    cout << s << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}