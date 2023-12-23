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
    double m[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> m[i];
    }
    double w[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> w[i];
    }
    int a, b;
    cin >> a >> b;
    int total = 0;
    for (int i = 0; i < 5; i++)
    {
        int idk = i + 1;
        double super = 500 * idk / 10 * 3;

        total += max(super, (250 - m[i]) / 250 * (500 * idk) - 50 * w[i]);
    }

    cout << total + a * 100 - b * 50;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}