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
    int a[n];
    int minpos;
    int minimal = 1e9 + 1;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (a[i] < minimal)
        {

            minimal = a[i];
            minpos = i + 1;
        }
    }
    int counts = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == minimal)
            counts++;
    }
    if (counts >= 2)
        cout << "Still Rozdil";
    else
        cout << minpos;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}