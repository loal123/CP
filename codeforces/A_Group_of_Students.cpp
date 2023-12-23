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
    int m;
    cin >> m;
    int a[m];
    int total = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
        total += a[i];
    }
    int super, girl;
    cin >> super >> girl;
    int tflc = 0;
    int pos = 0;
    for (int i = 0; i < m; i++)
    {

        tflc += a[i];
        total -= a[i];
        if (tflc >= super && tflc <= girl && total >= super && total <= girl)
        {
            pos = i + 2;
        }
    }
    cout << pos;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}