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
    int a = 0;
    for (int i = 1; i <= n; i++)
    {
        int z;
        cin >> z;
        if (i < 10)
        {
            if (z >= i)
                a++;

            if (z >= i * 11)
                a++;
        }
        else
        {
            if (i % 11 == 0)
            {
                if (z >= i % 10)
                    a++;
                if (z >= i)
                    a++;
            }
        }
    }
    cout << a;
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