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
    string s;
    cin >> s;
    ll idk = stoll(s);
    string bruh = to_string(idk);
    if (s != bruh)
        cout << "BigInteger";
    else if (idk <= pow(2, 7) - 1)
        cout << "byte";
    else if (idk <= pow(2, 15) - 1)
        cout << "short";
    else if (idk <= pow(2, 31) - 1)
        cout << "int";
    else
        cout << "long";
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