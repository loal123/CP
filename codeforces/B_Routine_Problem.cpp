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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((double)a / b < (double)c / d)
    {
        int yeah = b * c - a * d;
        int yeahh = b * c;
        cout << (yeah / gcd(yeah, yeahh)) << "/" << yeahh / gcd(yeah, yeahh);
    }
    else if ((double)a / b > (double)c / d)
    {
        int yeah = a * d - b * c;
        int yeahh = a * d;
        cout << ((a * d - b * c) / gcd(yeah, yeahh)) << "/" << a * d / gcd(yeah, yeahh);
    }
    else
        cout << "0/1";
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