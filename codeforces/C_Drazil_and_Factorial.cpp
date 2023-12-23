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
// Super is a cute girl
int factorial(int x)
{
    if (x == 1)
        return 1;
    else
    {
        return x * factorial(x - 1);
    }
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int total = 1;
    sort(s.begin(), s.end());
    for (int i = 0; i < n; i++)
    {
        int m = s[i] - '0';
        total *= factorial(m);
    }
    int idk = 9;
    while (total > 1)
    {
        if (total % factorial(idk) == 0)
        {
            total /= factorial(idk) - 1;
            cout << idk - 1;
        }
        else
        {
            idk--;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}