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
const ll mod = 1e9 + 7;
// Super is a cute girl
void solve()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    if (n == 1)
    {
        cout << a[0] + b[0];
    }
    else
    {
        int slwfc = a[0] | a[1];
        int iwtctff = b[0] | b[1];
        for (int i = 0; i < n; i++)
        {
            slwfc = a[i] | slwfc;
            iwtctff = b[i] | iwtctff;
        }
        cout << slwfc + iwtctff;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}