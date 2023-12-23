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
    string supercutegirl;
    cin >> supercutegirl;
    if (supercutegirl.size() % 2 == 1)
        cout << "NO";
    else
    {
        int flandrescarlet = supercutegirl.size();
        if (supercutegirl.substr(0, flandrescarlet / 2) == supercutegirl.substr(flandrescarlet / 2, flandrescarlet / 2))
            cout << "YES";
        else
            cout << "NO";
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