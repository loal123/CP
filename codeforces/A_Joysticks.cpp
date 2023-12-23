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
    int super, girl;
    cin >> super >> girl;
    int i = 0;
    if (super == 1 && girl == 1)
        cout << 0;
    else if (min(super, girl) == 1 && max(super, girl) == 2)
        cout << 1;
    else
    {
        while (super > 0 && girl > 0)
        {

            if (super < girl)
            {
                super++;
                girl -= 2;
            }
            else
            {
                girl++;
                super -= 2;
            }
            if (super <= 0 && girl <= 0)
                break;
            i++;
        }
        cout << i;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}