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
    int iwtctff = 400001;
    int tflc = 400001;
    for (int i = 0; i < super; i++)
    {
        int flandre;
        cin >> flandre;
        if (abs(flandre - girl) <= iwtctff)
        {
            if (abs(flandre - girl) == iwtctff)
            {
                tflc = min(tflc, flandre);
            }
            else
            {
                iwtctff = abs(flandre - girl);
                tflc = flandre;
            }
        }
    }
    cout << tflc;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}