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
// Super is the cutest girl
void solve()
{
    string s;
    cin >> s;

    int h = stoi(s.substr(0, 2));
    string m = (s.substr(3, 2));

    if (h >= 12)
    {
        if (h == 12)
        {

            cout << h << ':' << m << " " << "PM";
        }
        else
        {
            if (h % 12 < 10)
                cout << 0;
            cout << h % 12 << ':' << m << " PM";
        }
    }
    else
    {
        if (h == 0)
        {
            cout << 12 << ':' << m << " AM";
        }
        else
        {
            if (h < 10)
                cout << 0;
            cout << h << ':' << m << " AM";
        }
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