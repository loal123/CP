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
    vi v;
    for (int i = 1; i <= 1000; i++)
    {
        bool can = true;
        int temp = i;
        while (temp > 0)
        {
            if (temp % 10 != 4 && temp % 10 != 7)
            {
                can = false;
            }
            temp /= 10;
        }
        if (can)
            v.pb(i);
    }
    int n;
    cin >> n;
    bool lucky = false;
    for (int i = 0; i < v.size(); i++)
    {
        if (n % v[i] == 0)
            lucky = true;
    }
    if (lucky)
        cout << "YES";
    else
        cout << "NO";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}