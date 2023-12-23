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
    int super, cute, girl;
    cin >> super >> cute >> girl;
    int tflc;
    if (girl >= 0)
        tflc = 1;
    else
        tflc = -1;
    while (girl != 0)
    {

        cute += tflc;
        if (cute < 1)
        {
            cute = super;
        }
        else if (cute > super)
            cute = 1;

        girl -= tflc;
    }
    cout << cute;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}