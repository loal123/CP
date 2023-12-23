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
#define s << " "
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    int n;
    cin >> n;
    if (n / 1000 > 0)
    {
        cout << 1000 s << n / 1000 << endl;
        ;
        n -= n / 1000 * 1000;
    }
    if (n / 500 > 0)
    {
        cout << 500 s << n / 500 << endl;
        n -= n / 500 * 500;
    }
    if (n / 200 > 0)
    {
        cout << 200 s << n / 200 << endl;
        n -= n / 200 * 200;
    }
    if (n / 100 > 0)
    {
        cout << 100 s << n / 100 << endl;
        n -= n / 100 * 100;
    }
    if (n / 50 > 0)
    {
        cout << 50 s << n / 50 << endl;
        n -= n / 50 * 50;
    }
    if (n / 20 > 0)
    {
        cout << 20 s << n / 20 << endl;
        n -= n / 20 * 20;
    }
    if (n / 10 > 0)
    {
        cout << 10 s << n / 10 << endl;
        n -= n / 10 * 10;
    }
    if (n / 5 > 0)
    {
        cout << 5 s << n / 5 << endl;
        n -= n / 5 * 5;
    }
    if (n / 2 > 0)
    {
        cout << 2 s << n / 2 << endl;
        n -= n / 2 * 2;
    }
    if (n / 1 > 0)
    {
        cout << 1 s << n / 1;
        n -= n / 1;
    }
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