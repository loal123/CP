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
    int supercutegirl;
    cin >> supercutegirl;

    {
        int m = 1;
        for (int i = 1; i <= supercutegirl * supercutegirl; i += 2)
        {

            cout << m << " " << supercutegirl * supercutegirl + 1 - m << " ";
            m++;

            if ((i - 1 - supercutegirl - 2) % supercutegirl == 0)
                cout << endl;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
/*
1 4
2 3
1 5 9
2 6 7
3 4 8
1 2 15 16
3 4 13 14
5 6 12 11
7 8 9 10
1
2
3
4
5

*/
