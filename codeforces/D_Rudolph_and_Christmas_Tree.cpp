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
    double b, h;
    cin >> n >> b >> h;
    double counts = ((double(b * h) / 2)) * n;
    double a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (abs(a[i] - a[i + 1]) < h)
        {
            double idk = (double)h - abs(a[i] - a[i + 1]);
            double idfk = (double)(idk) * (double)((b - ((double)b / (idk + 1)))) / 2;
            counts -= idfk;
        }
    }
    cout << (double)counts << '\n';
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