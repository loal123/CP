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
    int m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            m = n / 2;

            if (j < abs(n / 2 - i) || j > n - 1 - abs(n / 2 - i))
            {
                cout << "*";
            }
            else
            {
                cout << "D";
            }
        }
        cout << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}