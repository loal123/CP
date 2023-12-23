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
    int m, d;
    cin >> m >> d;
    int n;
    cin >> n;
    int x1 = m - d;
    int x2 = m;
    int y1 = 0;
    int y2 = m;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a >= x1 && a <= x2 && b >= y1 && b <= y2)
            cout << "YES";
        else
            cout << "NO";
        cout << '\n';
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