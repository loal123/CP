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
    int Super, is, a, cute, girl;
    cin >> Super >> is >> a >> cute >> girl;
    int iwtlff = 0;
    for (int i = 1; i <= girl; i++)
    {
        if (i % Super == 0 || i % is == 0 || i % a == 0 || i % cute == 0)
            iwtlff++;
    }
    cout << iwtlff;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}